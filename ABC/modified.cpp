# include "iGraphics.h"
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int ekbar = 0 , ekbar2;

char *mn[3] = { "11.bmp", "12.bmp", "13.bmp" };
char *tw[3] = { "21.bmp", "22.bmp", "23.bmp" };
char *th[3] = { "31.bmp", "32.bmp", "33.bmp" };
char *fo[3] = { "41.bmp", "42.bmp", "43.bmp" };
char *fi[3] = { "51.bmp", "52.bmp", "53.bmp" };
char *si[3] = { "61.bmp", "62.bmp", "63.bmp" };
char *se[3] = { "71.bmp", "72.bmp", "73.bmp" };
char *ei[3] = { "81.bmp", "82.bmp", "83.bmp" };
char *ni[3] = { "91.bmp", "92.bmp", "93.bmp" };
char *te[3] = { "101.bmp", "102.bmp", "103.bmp" };

// char *allnumpic[11]={mn[3],tw[3],th[3],fo[3],fi[3],si[3],se[3],ei[3],ni[3],te[3]};

int num_to_pic = 0, pic_to_num = 0;

char *mnsound[3] = { "11.wav", "12.wav", "13.wav" };
char *twsound[3] = { "21.wav", "22.wav", "23.wav" };
char *thsound[3] = { "31.wav", "32.wav", "33.wav" };
char *fosound[3] = { "41.wav", "42.wav", "43.wav" };
char *fisound[3] = { "51.wav", "52.wav", "53.wav" };
char *sisound[3] = { "61.wav", "62.wav", "63.wav" };
char *sesound[3] = { "71.wav", "72.wav", "73.wav" };
char *eisound[3] = { "81.wav", "82.wav", "83.wav" };
char *nisound[3] = { "91.wav", "92.wav", "93.wav" };
char *tesound[3] = { "101.wav", "102.wav", "103.wav" };

//char *allnumsound[11]={mnsound[3],twsound[3],thsound[3],fosound[3],fisound[3],sisound[3],sesound[3],eisound[3],nisound[3],tesound[3]};

int learn;

char *letter[26] = { "a.bmp", "b.bmp", "c.bmp", "d.bmp", "e.bmp", "f.bmp", "g.bmp", "h.bmp", "i.bmp", "j.bmp", "k.bmp", "l.bmp", "m.bmp", "n.bmp", "o.bmp", "p.bmp", "q.bmp", "r.bmp", "s.bmp", "t.bmp", "u.bmp", "v.bmp", "w.bmp", "x.bmp", "y.bmp", "z.bmp" };

char *_a[8] = { "apple.bmp", "almond.bmp", "ant.bmp", "arm.bmp", "arum.bmp", "arrow.bmp", "aligator.bmp", "axe.bmp" };
char *_b[11] = { "ball.bmp", "balloon.bmp", "bamboo.bmp", "banana.bmp", "bee.bmp", "bread.bmp", "brush.bmp", "bubbles.bmp", "brownie.bmp", "bucket.bmp", "butterfly.bmp" };
char *_c[10] = { "carrot.bmp", "cat.bmp", "car.bmp", "cow.bmp", "cap.bmp", "candy.bmp", "camera.bmp", "camellia.bmp", "camel.bmp", "candle.bmp" };
char *_d[9] = { "dahlia.bmp", "daisy.bmp", "dart.bmp", "deer.bmp", "diamond.bmp", "dog.bmp", "doll.bmp", "dolphin.bmp", "dove.bmp" };
char *_e[8] = { "earth.bmp", "eagle.bmp", "elephant.bmp", "egg.bmp", "eggplant.bmp", "envelope.bmp", "eye.bmp", "elbow.bmp" };
char *_f[10] = { "flag.bmp", "Flower.bmp", "fish.bmp", "frog.bmp", "fox.bmp", "fire.bmp", "family.bmp", "fan.bmp", "feather.bmp", "finger.bmp" };
char *_g[11] = { "gerbera.bmp", "ginger.bmp", "giraffe.bmp", "goat.bmp", "gem.bmp", "glass.bmp", "grape.bmp", "gras.bmp", "grasshopper.bmp", "guava.bmp", "guiter.bmp" };
char *_h[8] = { "horse.bmp", "hen.bmp", "honey.bmp", "home.bmp", "hook.bmp", "horn.bmp", "heart.bmp", "hedgehog.bmp" };
char *_i[8] = { "icecream.bmp", "ice.bmp", "ink.bmp", "igloo.bmp", "inn.bmp", "insect.bmp", "iron.bmp", "island.bmp" };
char *_j[8] = { "jasmin.bmp", "jay.bmp", "jackfruit.bmp", "jacket.bmp", "jaguar.bmp", "jam.bmp", "jug.bmp", "jet.bmp" };
char *_k[9] = { "kangaroo.bmp", "kettle.bmp", "key.bmp", "king.bmp", "kite.bmp", "kitten.bmp", "kiwi.bmp", "kiwifruit.bmp", "koala.bmp" };
char *_l[10] = { "lemon.bmp", "lion.bmp", "leaf.bmp", "lollypop.bmp", "lotus.bmp", "Lychee.bmp", "lamb.bmp", "lamp.bmp", "lizard.bmp", "loon.bmp" };
char *_m[8] = { "mango.bmp", "macaw.bmp", "maze.bmp", "moon.bmp", "mushroom.bmp", "marshmallow.bmp", "magpie.bmp", "magnet.bmp" };
char *_n[8] = { "nuts.bmp", "nylon.bmp", "nose.bmp", "nightingale.bmp", "nutmeg.bmp", "nail.bmp", "neck.bmp", "net.bmp" };
char *_o[9] = { "orange.bmp", "onioin.bmp", "oil.bmp", "olive.bmp", "orchid.bmp", "octopus.bmp", "okra.bmp", "owl.bmp", "oyster.bmp" };
char *_p[10] = { "pinapple.bmp", "pencil.bmp", "paint.bmp", "papaya.bmp", "pastry.bmp", "peacock.bmp", "pearl.bmp", "pigeon.bmp", "pumpkin.bmp", "painting.bmp" };
char *_q[5] = { "queen.bmp", "quail.bmp", "quilt.bmp", "quiver.bmp", "quoit.bmp" };
char *_r[11] = { "rabit.bmp", "radio.bmp", "rat.bmp", "rose.bmp", "rack.bmp", "racket.bmp", "radish.bmp", "rainbow.bmp", "ring.bmp", "rickshaw.bmp", "rope.bmp" };
char *_s[10] = { "schooll.bmp", "star.bmp", "strawberry.bmp", "starfruit.bmp", "sweater.bmp", "shark.bmp", "shoe.bmp", "sharpner.bmp", "sky.bmp", "snake.bmp" };
char *_t[10] = { "tea.bmp", "tape.bmp", "tart.bmp", "teddy.bmp", "telephnoe.bmp", "television.bmp", "temple.bmp", "tiger.bmp", "toffe.bmp", "tomato.bmp" };
char *_u[2] = { "umbrella.bmp", "universe.bmp" };
char *_v[3] = { "vegetables.bmp", "violin.bmp", "vine.bmp" };
char *_w[8] = { "watermelon.bmp", "water.bmp", "wool.bmp", "wire.bmp", "wolf.bmp", "waffles.bmp", "window.bmp", "wood.bmp" };
char *_x[2] = { "xray.bmp", "xylophnoe.bmp" };
char *_y[5] = { "yolk.bmp", "yard.bmp", "yacht.bmp", "yew.bmp", "yawl.bmp" };
char *_z[4] = { "zinnia.bmp", "zebra.bmp", "ZIPER.bmp", "zoo.bmp" };

char *asound[8] = { "apple.wav", "almond.wav", "ant.wav", "arm.wav", "arum.wav", "arrow.wav", "aligator.wav", "axe.wav" };
char *bsound[11] = { "ball.wav", "balloon.wav", "bamboo.wav", "banana.wav", "bee.wav", "bread.wav", "brush.wav", "bubbles.wav", "brownie.wav", "bucket.wav", "butterfly.wav" };
char *csound[10] = { "carrot.wav", "cat.wav", "car.wav", "cow.wav", "cap.wav", "candy.wav", "camera.wav", "camellia.wav", "camel.wav", "candle.wav" };
char *dsound[9] = { "dahlia.wav", "daisy.wav", "dart.wav", "deer.wav", "diamond.wav", "dog.wav", "doll.wav", "dolphin.wav", "dove.wav" };
char *esound[8] = { "earth.wav", "eagle.wav", "elephant.wav", "egg.wav", "eggplant.wav", "envelope.wav", "eye.wav", "elbow.wav" };
char *fsound[10] = { "flag.wav", "Flower.wav", "fish.wav", "frog.wav", "fox.wav", "fire.wav", "family.wav", "fan.wav", "feather.wav", "finger.wav" };
char *gsound[11] = { "gerbera.wav", "ginger.wav", "giraffe.wav", "goat.wav", "gem.wav", "glass.wav", "grape.wav", "gras.wav", "grasshopper.wav", "guava.wav", "guiter.wav" };
char *hsound[8] = { "horse.wav", "hen.wav", "honey.wav", "home.wav", "hook.wav", "horn.wav", "heart.wav", "hedgehog.wav" };
char *isound[8] = { "icecream.wav", "ice.wav", "ink.wav", "igloo.wav", "inn.wav", "insect.wav", "iron.wav", "island.wav" };
char *jsound[8] = { "jasmin.wav", "jay.wav", "jackfruit.wav", "jacket.wav", "jaguar.wav", "jam.wav", "jug.wav", "jet.wav" };
char *ksound[9] = { "kangaroo.wav", "kettle.wav", "key.wav", "king.wav", "kite.wav", "kitten.wav", "kiwi.wav", "kiwifruit.wav", "koala.wav" };
char *lsound[10] = { "lemon.wav", "lion.wav", "leaf.wav", "lollypop.wav", "lotus.wav", "Lychee.wav", "lamb.wav", "lamp.wav", "lizard.wav", "loon.wav" };
char *msound[8] = { "mango.wav", "macaw.wav", "maze.wav", "moon.wav", "mushroom.wav", "marshmallow.wav", "magpie.wav", "magnet.wav" };
char *nsound[8] = { "nuts.wav", "nylon.wav", "nose.wav", "nightingale.wav", "nutmeg.wav", "nail.wav", "neck.wav", "net.wav" };
char *osound[9] = { "orange.wav", "onioin.wav", "oil.wav", "olive.wav", "orchid.wav", "octopus.wav", "okra.wav", "owl.wav", "oyster.wav" };
char *psound[10] = { "pinapple.wav", "pencil.wav", "paint.wav", "papaya.wav", "pastry.wav", "peacock.wav", "pearl.wav", "pigeon.wav", "pumpkin.wav", "painting.wav" };
char *qsound[5] = { "queen.wav", "quail.wav", "quilt.wav", "quiver.wav", "quoit.wav" };
char *rsound[11] = { "rabit.wav", "radio.wav", "rat.wav", "rose.wav", "rack.wav", "racket.wav", "radish.wav", "rainbow.wav", "ring.wav", "rickshaw.wav", "rope.wav" };
char *ssound[10] = { "schooll.wav", "star.wav", "strawberry.wav", "starfruit.wav", "sweater.wav", "shark.wav", "shoe.wav", "sharpner.wav", "sky.wav", "snake.wav" };
char *tsound[10] = { "tea.wav", "tape.wav", "tart.wav", "teddy.wav", "telephnoe.wav", "television.wav", "temple.wav", "tiger.wav", "toffe.wav", "tomato.wav" };
char *usound[2] = { "umbrella.wav", "universe.wav" };
char *vsound[3] = { "vegetables.wav", "violin.wav", "vine.wav" };
char *wsound[8] = { "watermelon.wav", "water.wav", "wool.wav", "wire.wav", "wolf.wav", "waffles.wav", "window.wav", "wood.wav" };
char *xsound[2] = { "xray.wav", "xylophnoe.wav" };
char *ysound[5] = { "yolk.wav", "yard.wav", "yacht.wav", "yew.wav", "yawl.wav" };
char *zsound[4] = { "zinnia.wav", "zebra.wav", "ZIPER.wav", "zoo.wav" };


int a = -1, b = -1, c = -1, d = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
int yy = -1, bb = -1, cc = -1, dd = -1, ee = -1, ff = -1, gg = -1, hh = -1, ii = -1, jj = -1;

int choose = 0, back = 0;

int mainmenu = 1, quiz = 0, alphabet = 0, number = 0;
int alp_to_pic = 0, pic_to_alp = 0;
int ques_1 = 0, ques_2 = 0, ques_3 = 0, ques_4 = 0, ques_5 = 0, ques_6 = 0, ques_7 = 0, ques_8 = 0, ques_9 = 0, ques_10 = 0, ques_11 = 0, ques_12 = 0, ques_13 = 0, ques_14 = 0, ques_15 = 0, ques_16 = 0;
int qu_1 = 0, qu_2 = 0, qu_3 = 0, qu_4 = 0, qu_5 = 0, qu_6 = 0, qu_7 = 0, qu_8 = 0, qu_9 = 0, qu_10 = 0, qu_11 = 0, qu_12 = 0, qu_13 = 0, qu_14 = 0, qu_15 = 0, qu_16 = 0;
int right_a = 0, right_b = 0, right_c = 0, right_d = 0, wrong_a = 0, wrong_b = 0, wrong_c = 0, wrong_d = 0;
char *choose_a, *choose_b, *choose_c, *choose_d, *choose_e, *choose_f, *choose_g, *choose_h, *choose_i, *choose_j, *choose_k, *choose_l, *choose_m, *choose_n, *choose_o, *choose_p, *choose_q, *choose_r, *choose_s, *choose_t, *choose_u, *choose_v, *choose_w, *choose_x, *choose_y, *choose_z;

char *rand_a, *rand_b, *rand_c, *rand_d, *rand_e, *rand_f, *rand_g, *rand_h, *rand_i, *rand_j, *rand_k, *rand_l, *rand_m, *rand_n, *rand_o, *rand_p, *rand_q, *rand_r, *rand_s, *rand_t, *rand_u, *rand_v, *rand_w, *rand_x, *rand_y, *rand_z;

//char *allalphapic[27]={_a[8],_b[10],_c[8],_d[10],_e[8],_f[9],_g[11],_h[8],_i[8],_j[8],_k[8],_l[9],_m[9],_n[7],_o[10],_p[9],_q[7],_r[11],_s[11],_t[10],_u[3],_v[3],_w[8],_x[2],_y[5],_z[4]};

char *pic_a[8] = { "a_1.bmp", "a_2.bmp", "a_3.bmp", "a_4.bmp", "a_5.bmp", "a_6.bmp", "a_7.bmp", "a_8.bmp" };
char *pic_b[10] = { "b_1.bmp", "b_2.bmp", "b_3.bmp", "b_4.bmp", "b_5.bmp", "b_6.bmp", "b_7.bmp", "b_8.bmp", "b_9.bmp", "b_10.bmp" };
char *pic_c[8] = { "c_1.bmp", "c_2.bmp", "c_3.bmp", "c_4.bmp", "c_5.bmp", "c_6.bmp", "c_7.bmp", "c_8.bmp" };
char *pic_d[10] = { "d_1.bmp", "d_2.bmp", "d_3.bmp", "d_4.bmp", "d_5.bmp", "d_6.bmp", "d_7.bmp", "d_8.bmp", "d_9.bmp", "d_10.bmp" };
char *pic_e[8] = { "e_1.bmp", "e_2.bmp", "e_3.bmp", "e_4.bmp", "e_5.bmp", "e_6.bmp", "e_7.bmp", "e_8.bmp" };
char *pic_f[9] = { "f_1.bmp", "f_2.bmp", "f_3.bmp", "f_4.bmp", "f_5.bmp", "f_6.bmp", "f_7.bmp", "f_8.bmp", "f_9.bmp" };
char *pic_g[11] = { "g_1.bmp", "g_2.bmp", "g_3.bmp", "g_4.bmp", "g_5.bmp", "g_6.bmp", "g_7.bmp", "g_8.bmp", "g_9.bmp", "g_10.bmp", "g_11.bmp" };
char *pic_h[8] = { "h_1.bmp", "h_2.bmp", "h_3.bmp", "h_4.bmp", "h_5.bmp", "h_6.bmp", "h_7.bmp", "h_8.bmp" };
char *pic_i[8] = { "i_1.bmp", "i_2.bmp", "i_3.bmp", "i_4.bmp", "i_5.bmp", "i_6.bmp", "i_7.bmp", "i_8.bmp" };
char *pic_j[8] = { "j_1.bmp", "j_2.bmp", "j_3.bmp", "j_4.bmp", "j_5.bmp", "j_6.bmp", "j_7.bmp", "j_8.bmp" };
char *pic_k[8] = { "k_1.bmp", "k_2.bmp", "k_3.bmp", "k_4.bmp", "k_5.bmp", "k_6.bmp", "k_7.bmp", "k_8.bmp" };
char *pic_l[9] = { "l_1.bmp", "l_2.bmp", "l_3.bmp", "l_4.bmp", "l_5.bmp", "l_6.bmp", "l_7.bmp", "l_8.bmp", "l_9.bmp" };
char *pic_m[9] = { "m_1.bmp", "m_2.bmp", "m_3.bmp", "m_4.bmp", "m_5.bmp", "m_6.bmp", "m_7.bmp", "m_8.bmp", "m_9.bmp" };
char *pic_n[7] = { "n_1.bmp", "n_2.bmp", "n_3.bmp", "n_4.bmp", "n_5.bmp", "n_6.bmp", "n_7.bmp" };
char *pic_o[10] = { "o_1.bmp", "o_2.bmp", "o_3.bmp", "o_4.bmp", "o_5.bmp", "o_6.bmp", "o_7.bmp", "o_8.bmp", "o_9.bmp", "o_10.bmp" };
char *pic_p[9] = { "p_1.bmp", "p_2.bmp", "p_3.bmp", "p_4.bmp", "p_5.bmp", "p_6.bmp", "p_7.bmp", "p_8.bmp", "p_9.bmp" };
char *pic_q[7] = { "q_1.bmp", "q_2.bmp", "q_3.bmp", "q_4.bmp", "q_5.bmp", "q_6.bmp", "q_7.bmp" };
char *pic_r[11] = { "r_1.bmp", "r_2.bmp", "r_3.bmp", "r_4.bmp", "r_5.bmp", "r_6.bmp", "r_7.bmp", "r_8.bmp", "r_9.bmp", "r_10.bmp", "r_11.bmp" };
char *pic_s[11] = { "s_1.bmp", "s_2.bmp", "s_3.bmp", "s_4.bmp", "s_5.bmp", "s_6.bmp", "s_7.bmp", "s_8.bmp", "s_9.bmp", "s_10.bmp" };
char *pic_t[10] = { "t_1.bmp", "t_2.bmp", "t_3.bmp", "t_4.bmp", "t_5.bmp", "t_6.bmp", "t_7.bmp", "t_8.bmp", "t_9.bmp", "t_10.bmp" };
char *pic_u[3] = { "u_1.bmp", "u_2.bmp" };
char *pic_v[3] = { "v_1.bmp", "v_2.bmp", "v_3.bmp" };
char *pic_w[8] = { "w_1.bmp", "w_2.bmp", "w_3.bmp", "w_4.bmp", "w_5.bmp", "w_6.bmp", "w_7.bmp", "w_8.bmp" };
char *pic_x[2] = { "x_1.bmp", "x_2.bmp" };
char *pic_y[5] = { "y_1.bmp", "y_2.bmp", "y_3.bmp", "y_4.bmp", "y_5.bmp" };
char *pic_z[4] = { "z_1.bmp", "z_2.bmp", "z_3.bmp", "z_4.bmp" };

//char *ashalphapic[27]={"a1.bmp","b1.bmp","c1.bmp","d1.bmp","e1.bmp","f1.bmp","g1.bmp","h1.bmp","i1.bmp","j1.bmp","k1.bmp","l1.bmp","m1.bmp","n1.bmp","o1.bmp","p1.bmp","q1.bmp","r1.bmp""s1.bmp""t1.bmp","u1.bmp","v1.bmp","w1.bmp","x1.bmp","y1.bmp","z1.bmp"};


char *exp_a, *exp_b, *exp_c, *exp_d, *exp_e, *exp_f, *exp_g, *exp_h, *exp_i, *exp_j, *exp_k, *exp_l, *exp_m, *exp_n, *exp_o, *exp_p;
char *except_ijkl[22] = { "alp_a.bmp", "alp_b.bmp", "alp_c.bmp", "alp_d.bmp", "alp_e.bmp", "alp_f.bmp", "alp_g.bmp", "alp_h.bmp", "alp_m.bmp", "alp_n.bmp", "alp_o.bmp", "alp_p.bmp", "alp_q.bmp", "alp_r.bmp", "alp_s.bmp", "alp_t.bmp", "alp_u.bmp", "alp_v.bmp", "alp_w.bmp", "alp_x.bmp", "alp_y.bmp", "alp_z.bmp" };
char *except_mnop[22] = { "alp_a.bmp", "alp_b.bmp", "alp_c.bmp", "alp_d.bmp", "alp_e.bmp", "alp_f.bmp", "alp_g.bmp", "alp_h.bmp", "alp_i.bmp", "alp_j.bmp", "alp_k.bmp", "alp_l.bmp", "alp_q.bmp", "alp_r.bmp", "alp_s.bmp", "alp_t.bmp", "alp_u.bmp", "alp_v.bmp", "alp_w.bmp", "alp_x.bmp", "alp_y.bmp", "alp_z.bmp" };
char *except_qrst[22] = { "alp_a.bmp", "alp_b.bmp", "alp_c.bmp", "alp_d.bmp", "alp_e.bmp", "alp_f.bmp", "alp_g.bmp", "alp_h.bmp", "alp_m.bmp", "alp_n.bmp", "alp_o.bmp", "alp_i.bmp", "alp_j.bmp", "alp_k.bmp", "alp_l.bmp", "alp_t.bmp", "alp_u.bmp", "alp_v.bmp", "alp_w.bmp", "alp_x.bmp", "alp_y.bmp", "alp_z.bmp" };
char *except_uvwx[22] = { "alp_a.bmp", "alp_b.bmp", "alp_c.bmp", "alp_d.bmp", "alp_e.bmp", "alp_f.bmp", "alp_g.bmp", "alp_h.bmp", "alp_m.bmp", "alp_n.bmp", "alp_o.bmp", "alp_p.bmp", "alp_q.bmp", "alp_r.bmp", "alp_s.bmp", "alp_t.bmp", "alp_i.bmp", "alp_j.bmp", "alp_k.bmp", "alp_l.bmp", "alp_y.bmp", "alp_z.bmp" };
char *picture_i, *picture_j, *picture_k, *picture_l, *picture_m, *picture_n, *picture_o, *picture_p, *picture_q, *picture_r, *picture_s, *picture_t, *picture_u, *picture_v, *picture_w, *picture_x;
int n_p1 = 0, n_p2 = 0, n_p3 = 0, n_p4 = 0, n_p5 = 0, n_p6 = 0, n_p7 = 0, n_p8 = 0, n_p9 = 0, n_p10 = 0;
int p_n1 = 0, p_n2 = 0, p_n3 = 0, p_n4 = 0, p_n5 = 0, p_n6 = 0, p_n7 = 0, p_n8 = 0, p_n9 = 0, p_n10 = 0;


/////////////////////color er variables ekhane declare////////////////////////

int colorChose = -1 , colorIndex=-1 ;
char * color[10] = { "blu_main.bmp", "red_main.bmp", "gree_main.bmp", "yel_main.bmp", "pin_main.bmp", "pur_main.bmp", "ora_main.bmp", "brow_main.bmp", "whi_main.bmp", "bla_main.bmp" };
char * colorErPic[10][3] =
{
	{ "33.bmp", "blue.bmp", "owl.bmp" },
	{ "apple.bmp", "tomato.bmp", "strawberry.bmp" },
	{ "aligator.bmp", "okra.bmp", "vine.bmp" },
	{ "banana.bmp", "starfruit.bmp", "telephnoe.bmp" },
	{ "51.bmp", "octopus.bmp", "pink.bmp" },
	{ "21.bmp", "purple.bmp", "purple1.bmp" },
	{ "carrot.bmp", "orange.bmp", "orange1.bmp" },
	{ "almond.bmp", "brown.bmp", "brownie.bmp" },
	{ "paper.bmp", "teeth.bmp", "paper.bmp" },
	{ "shirt.bmp", "teeth.bmp", "shirt.bmp" }
};





void lphabet_draw()
{
	iClear();
	iSetColor(81, 230, 82);
	iFilledRectangle(0, 0, 1200, 700);
	iShowBMP(792, 600, "a.bmp");
	iShowBMP(872, 600, "b.bmp");
	iShowBMP(952, 600, "c.bmp");
	iShowBMP(1036, 600, "d.bmp");
	iShowBMP(792, 500, "e.bmp");
	iShowBMP(872, 500, "f.bmp");
	iShowBMP(952, 500, "g.bmp");
	iShowBMP(1036, 500, "h2.bmp");
	iShowBMP(792, 400, "i.bmp");
	iShowBMP(872, 400, "j.bmp");
	iShowBMP(952, 400, "k.bmp");
	iShowBMP(1036, 400, "l.bmp");
	iShowBMP(792, 300, "m.bmp");
	iShowBMP(872, 300, "n.bmp");
	iShowBMP(952, 300, "o.bmp");
	iShowBMP(1036, 300, "p.bmp");
	iShowBMP(792, 200, "q.bmp");
	iShowBMP(872, 200, "r.bmp");
	iShowBMP(952, 200, "s.bmp");
	iShowBMP(1036, 200, "t.bmp");
	iShowBMP(792, 100, "u.bmp");
	iShowBMP(872, 100, "v.bmp");
	iShowBMP(952, 100, "w.bmp");
	iShowBMP(1036, 100, "x.bmp");
	iShowBMP(872, 0, "y.bmp");
	iShowBMP(952, 0, "z.bmp");
	iShowBMP(100, 640, "back.bmp");
}

void aprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _a[a]);
	iShowBMP(792, 600, "a1.bmp");

}
void bprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _b[b]);
	iShowBMP(872, 600, "b1.bmp");

}
void cprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _c[c]);
	iShowBMP(952, 600, "c1.bmp");
}
void dprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _d[d]);
	iShowBMP(1032, 600, "d1.bmp");
}
void eprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _e[e]);
	iShowBMP(792, 500, "e1.bmp");
}
void fprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _f[f]);
	iShowBMP(872, 500, "f1.bmp");
}
void gprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _g[g]);
	iShowBMP(952, 500, "g1.bmp");
}
void hprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _h[h]);
	iShowBMP(1032, 500, "h1.bmp");
}
void iprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _i[i]);
	iShowBMP(792, 400, "i1.bmp");

}
void jprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _j[j]);
	iShowBMP(872, 400, "j1.bmp");
}
void kprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _k[k]);
	iShowBMP(952, 400, "k1.bmp");
}
void lprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _l[l]);
	iShowBMP(1032, 400, "l1.bmp");
}
void mprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _m[m]);
	iShowBMP(792, 300, "m1.bmp");
}
void nprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _n[n]);
	iShowBMP(872, 300, "n1.bmp");
}
void oprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _o[o]);
	iShowBMP(952, 300, "o1.bmp");
}
void pprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _p[p]);
	iShowBMP(1032, 300, "p1.bmp");
}
void qprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _q[q]);
	iShowBMP(792, 200, "q1.bmp");
}
void rprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _r[r]);
	iShowBMP(872, 200, "r1.bmp");
}
void sprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _s[s]);
	iShowBMP(952, 200, "s1.bmp");
}
void tprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _t[t]);
	iShowBMP(1032, 200, "t1.bmp");
}
void uprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _u[u]);
	iShowBMP(792, 100, "u1.bmp");
}
void vprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _v[v]);
	iShowBMP(872, 100, "v1.bmp");
}
void wprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _w[w]);
	iShowBMP(952, 100, "w1.bmp");
}
void xprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _x[x]);
	iShowBMP(1032, 100, "x1.bmp");
}
void yprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _y[y]);
	iShowBMP(872, 00, "y1.bmp");
}
void zprint()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, _z[z]);
	iShowBMP(952, 0, "z1.bmp");
}

/*void alphabetprint(void)
{
int i,j;
iShowBMP(366,16,"pink-2.bmp");
iShowBMP(218,16,"pink-1.bmp");
for(i=0;i<26;i++)
{
for(j=0;j<10;j++)
{
iShowBMP(100,100,allalphapic[27]);
}
}

for(i=0;i<26;i++)
{
iShowBMP(952,0,ashalphapic[27]);
}
}*/



void first_page(void)
{
	iClear();
	iSetColor(255, 255, 102);
	iFilledRectangle(0, 0, 1200, 700);//full screen yellow
	iShowBMP(0, 94, "crop1.bmp");
	iShowBMP(1072, 94, "crop2.bmp");
	iSetColor(0, 0, 255);
	iFilledRectangle(510, 450, 220, 50);//color er box er box
	iSetColor(0, 0, 0);
	iText(570, 460, "COLORS", GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(255, 128, 255);
	iFilledRectangle(510, 350, 220, 50);//alphabet er box
	iSetColor(0, 0, 0);
	iText(550, 360, "ALPHABETS", GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(0, 255, 0);
	iFilledRectangle(510, 250, 220, 50);//color er box er box
	iSetColor(0, 0, 0);
	iText(530, 260, "HUMAN BODY", GLUT_BITMAP_TIMES_ROMAN_24);   ///  nije adjust majhkane
	iSetColor(176, 98, 255);
	iFilledRectangle(520, 150, 200, 50);//number er box
	iSetColor(0, 0, 0);
	iText(560, 160, "NUMBERS", GLUT_BITMAP_TIMES_ROMAN_24);
	iShowBMP(0, 620, "back.bmp");
	iFilledRectangle(1100, 20, 80, 30);//exit er box
	iSetColor(0, 0, 0);
	iSetColor(255, 255, 102);//vul
	iText(1125, 31, "Exit");
}
void nb_draw(void)
{
	iClear();
	iSetColor(98, 233, 240);
	iFilledRectangle(0, 0, 1200, 700);//screen
	iShowBMP(712, 600, "num_1.bmp");
	iShowBMP(792, 600, "num_2.bmp");
	iShowBMP(872, 600, "num_3.bmp");
	iShowBMP(952, 600, "num_4.bmp");
	iShowBMP(1036, 600, "num_5.bmp");
	iShowBMP(712, 500, "num_6.bmp");
	iShowBMP(792, 500, "num_7.bmp");
	iShowBMP(872, 500, "num_8.bmp");
	iShowBMP(952, 500, "num_9.bmp");
	iShowBMP(1036, 500, "num_10.bmp");
	iShowBMP(100, 640, "back.bmp");
}

/*void numprint(void)
{
int i,j;

for(i=0;i<10;i++)
{
for(j=0;j<3;j++)
{
iShowBMP(366,16,"pink-2.bmp");
iShowBMP(218,16,"pink-1.bmp");
iShowBMP(100,100,*allnumpic[]);
}
}

}*/

void one_1(void)
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, mn[yy]);//1 er pictures
	iShowBMP(712, 600, "num11.bmp");//ash 1
}

void two_2(void)
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, tw[bb]);
	iShowBMP(792, 600, "num21.bmp");
}
void three_3(void)
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, th[cc]);
	iShowBMP(872, 600, "num31.bmp");
}
void four_4()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, fo[dd]);
	iShowBMP(952, 600, "num41.bmp");
}
void five_5()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, fi[ee]);
	iShowBMP(1032, 600, "num51.bmp");
}
void six_6()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, si[ff]);
	iShowBMP(712, 500, "num61.bmp");
}
void seven_7()
{

	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, se[gg]);
	iShowBMP(792, 500, "num71.bmp");
}
void eight_8()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, ei[hh]);
	iShowBMP(872, 500, "num81.bmp");
}

void nine_9()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, ni[ii]);
	iShowBMP(952, 500, "num91.bmp");
}
void ten_10()
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, te[jj]);
	iShowBMP(1032, 500, "num101.bmp");
}

///////////////////////// colors er ///////////////////

int inputColor(int mx,int my)
{
	if (ekbar2 == 0){ ekbar2 = 1; printf("\n mx my %d %d", mx, my); }
	int x = 712 , y = 600 , l=64;
	//int x = 700 , y = 489 ;
	//        537 ,     496 ;
	if (x + 80 * 0 <= mx && mx <= x + 80 * 0 + l  && y  <= my && my <= y + l)        return 0;
	else if (x + 80 * 1 <= mx && mx <= x + 80 * 1 + l  && y <= my && my <= y + l)    return 2;
	else if (x + 80 * 2 <= mx && mx <= x + 80 * 2 + l  && y <= my && my <= y + l)            return 4;
	else if (x + 80 * 3 <= mx && mx <= x + 80 * 3 + l  && y <= my && my <= y + l)             return 6;
	else if (x + 80 * 4 <= mx && mx <= x + 80 * 4 + l  && y <= my && my <= y + l)             return 8;
	else if (x + 80 * 0 <= mx && mx <= x + 80 * 0 + l  && y - 100 <= my && my <= y - 100 + l) return 1;
	else if (x + 80 * 1 <= mx && mx <= x + 80 * 1 + l  && y - 100 <= my && my <= y - 100 + l) return 3;
	else if (x + 80 * 2 <= mx && mx <= x + 80 * 2 + l  && y - 100 <= my && my <= y - 100 + l) return 5;
	else if (x + 80 * 3 <= mx && mx <= x + 80 * 3 + l  && y - 100 <= my && my <= y - 100 + l) return 7;
	else if (x + 80 * 4 <= mx && mx <= x + 80 * 4 + l  && y - 100 <= my && my <= y - 100 + l) return 9;
	else return 95;
}

void showColorPic(int i)
{
	iShowBMP(366, 16, "pink-2.bmp");
	iShowBMP(218, 16, "pink-1.bmp");
	iShowBMP(100, 100, colorErPic[i][colorIndex]);
	

}



//void showColorPic(int xa)
//{
//	iShowBMP(366, 16, "pink-2.bmp");
//	iShowBMP(218, 16, "pink-1.bmp");
//	iShowBMP(100, 100, colorErPic[i][colorIndex]);
//
//}


void colorDraw()
{
	iClear();
	iSetColor(81, 230, 82);
	iFilledRectangle(0, 0, 1200, 700);
	int i, j, k;
	for (i = 712, k=0; i <= 1036; i += 80)
	{
		for (j = 600; j >= 500; j -= 100)
		{
			iShowBMP(i,j, color[k++]);
		}
	}
	if (colorChose!=-1)  showColorPic( colorChose);
	iShowBMP(100, 640, "back.bmp");
}

void main_menu(void)
{
	iShowBMP(0, 0, "startpage.bmp");
}

void quiz_func(void)
{
	iSetColor(225, 108, 225);
	iFilledRectangle(0, 0, 1200, 700);
	iSetColor(0, 0, 0);
	iFilledRectangle(445, 145, 310, 110);
	iSetColor(255, 0, 128);
	iFilledRectangle(450, 150, 300, 100);
	iSetColor(0, 0, 0);
	iFilledRectangle(445, 345, 310, 110);
	iSetColor(0, 255, 128);
	iFilledRectangle(450, 350, 300, 100);
	iShowBMP(0, 94, "crop1.bmp");
	iShowBMP(1072, 94, "crop2.bmp");
	iSetColor(0, 0, 128);
	iText(550, 195, "NUMBERS", GLUT_BITMAP_HELVETICA_18);
	iText(545, 395, "ALPHABETS", GLUT_BITMAP_HELVETICA_18);
	iSetColor(0, 0, 0);
	iFilledRectangle(195, 520, 810, 110);
	iSetColor(255, 156, 108);
	iFilledRectangle(200, 525, 800, 100);
	iSetColor(0, 0, 0);
	iText(490, 565, "IT'S TIME FOR QUIZ!!!", GLUT_BITMAP_TIMES_ROMAN_24);
	iFilledRectangle(1100, 20, 80, 30);
	iFilledRectangle(990, 20, 80, 30);
	iSetColor(255, 0, 128);
	iText(1125, 31, "Exit");
	iText(1000, 31, "Back");
}
void alphabet_func(void)
{
	iSetColor(128, 0, 64);
	iFilledRectangle(0, 0, 1200, 700);
	iSetColor(0, 0, 0);
	iFilledRectangle(300, 400, 600, 80);
	iFilledRectangle(300, 220, 600, 80);
	iSetColor(255, 255, 70);
	iFilledRectangle(305, 405, 590, 70);
	iFilledRectangle(305, 225, 590, 70);
	iShowBMP(0, 94, "crop1.bmp");
	iShowBMP(1072, 94, "crop2.bmp");
	iSetColor(0, 0, 0);
	iText(450, 430, "MATCHING ALPHABET TO PICTURE", GLUT_BITMAP_HELVETICA_18);
	iText(450, 250, "MATCHING PICTURE TO ALPHABET", GLUT_BITMAP_HELVETICA_18);
	iSetColor(255, 255, 70);
	iFilledRectangle(40, 40, 80, 40);
	iSetColor(128, 0, 64);
	iText(50, 55, "<-Back", GLUT_BITMAP_HELVETICA_18);
	iSetColor(255, 255, 70);
	iFilledRectangle(1100, 20, 80, 30);
	iSetColor(128, 0, 64);
	iText(1125, 31, "Exit");
}

void ques_func(char ch)
{
	iSetColor(255, 255, 109);
	iFilledRectangle(0, 0, 1200, 700);
	iShowBMP(1072, 90, "red.bmp");//red arrow
	iSetColor(0, 0, 0);
	iFilledRectangle(531, 392, 138, 138);
	iFilledRectangle(243, 217, 138, 138);
	iFilledRectangle(435, 217, 138, 138);
	iFilledRectangle(627, 217, 138, 138);
	iFilledRectangle(819, 217, 138, 138);

	iFilledRectangle(40, 40, 80, 40);        //added
	iSetColor(128, 0, 64);
	iText(50, 55, "<-Back", GLUT_BITMAP_HELVETICA_18); //added

	iSetColor(0, 0, 0);
	iFilledRectangle(1100, 20, 80, 30);
	iSetColor(255, 255, 109);
	iText(1125, 31, "Exit");
	if (ch == 'a')
	{
		iShowBMP(536, 397, "alp_a.bmp");//quiz er A
		iShowBMP(248, 222, rand_a);
		iShowBMP(440, 222, exp_b);
		iShowBMP(632, 222, exp_c);
		iShowBMP(824, 222, exp_d);
	}
	if (ch == 'b')
	{
		iShowBMP(536, 397, "alp_b.bmp");
		iShowBMP(248, 222, rand_b);
		iShowBMP(440, 222, exp_a);
		iShowBMP(632, 222, exp_c);
		iShowBMP(824, 222, exp_d);
	}
	if (ch == 'c')
	{
		iShowBMP(536, 397, "alp_c.bmp");
		iShowBMP(248, 222, rand_c);
		iShowBMP(440, 222, exp_a);
		iShowBMP(632, 222, exp_b);
		iShowBMP(824, 222, exp_d);
	}
	if (ch == 'd')
	{
		iShowBMP(536, 397, "alp_d.bmp");
		iShowBMP(248, 222, rand_d);
		iShowBMP(440, 222, exp_a);
		iShowBMP(632, 222, exp_b);
		iShowBMP(824, 222, exp_c);
	}
	if (ch == 'e')
	{
		iShowBMP(536, 397, "alp_e.bmp");
		iShowBMP(440, 222, rand_e);
		iShowBMP(248, 222, exp_f);
		iShowBMP(632, 222, exp_g);
		iShowBMP(824, 222, exp_h);
	}
	if (ch == 'f')
	{
		iShowBMP(536, 397, "alp_f.bmp");
		iShowBMP(440, 222, rand_f);
		iShowBMP(248, 222, exp_e);
		iShowBMP(632, 222, exp_g);
		iShowBMP(824, 222, exp_h);
	}
	if (ch == 'g')
	{
		iShowBMP(536, 397, "alp_g.bmp");
		iShowBMP(440, 222, rand_g);
		iShowBMP(248, 222, exp_f);
		iShowBMP(632, 222, exp_e);
		iShowBMP(824, 222, exp_h);
	}
	if (ch == 'h')
	{
		iShowBMP(536, 397, "alp_h.bmp");
		iShowBMP(440, 222, rand_h);
		iShowBMP(248, 222, exp_f);
		iShowBMP(632, 222, exp_g);
		iShowBMP(824, 222, exp_e);
	}
	if (ch == 'i')
	{
		iShowBMP(536, 397, "alp_i.bmp");
		iShowBMP(632, 222, rand_i);
		iShowBMP(248, 222, exp_j);
		iShowBMP(440, 222, exp_k);
		iShowBMP(824, 222, exp_l);
	}
	if (ch == 'j')
	{
		iShowBMP(536, 397, "alp_j.bmp");
		iShowBMP(632, 222, rand_j);
		iShowBMP(248, 222, exp_i);
		iShowBMP(440, 222, exp_k);
		iShowBMP(824, 222, exp_l);
	}
	if (ch == 'k')
	{
		iShowBMP(536, 397, "alp_k.bmp");
		iShowBMP(632, 222, rand_k);
		iShowBMP(248, 222, exp_j);
		iShowBMP(440, 222, exp_k);
		iShowBMP(824, 222, exp_l);
	}
	if (ch == 'l')
	{
		iShowBMP(536, 397, "alp_l.bmp");
		iShowBMP(632, 222, rand_l);
		iShowBMP(248, 222, exp_j);
		iShowBMP(440, 222, exp_k);
		iShowBMP(824, 222, exp_i);
	}
	if (ch == 'm')
	{
		iShowBMP(536, 397, "alp_m.bmp");
		iShowBMP(824, 222, rand_m);
		iShowBMP(248, 222, exp_n);
		iShowBMP(440, 222, exp_o);
		iShowBMP(632, 222, exp_p);
	}
	if (ch == 'n')
	{
		iShowBMP(536, 397, "alp_n.bmp");
		iShowBMP(824, 222, rand_n);
		iShowBMP(248, 222, exp_m);
		iShowBMP(440, 222, exp_o);
		iShowBMP(632, 222, exp_p);
	}
	if (ch == 'o')
	{
		iShowBMP(536, 397, "alp_o.bmp");
		iShowBMP(824, 222, rand_o);
		iShowBMP(248, 222, exp_n);
		iShowBMP(440, 222, exp_m);
		iShowBMP(632, 222, exp_p);
	}
	if (ch == 'p')
	{
		iShowBMP(536, 397, "alp_p.bmp");
		iShowBMP(824, 222, rand_p);
		iShowBMP(248, 222, exp_n);
		iShowBMP(440, 222, exp_o);
		iShowBMP(632, 222, exp_m);
	}
}

void ulta_func(char ch)
{
	iSetColor(255, 0, 128);
	iFilledRectangle(0, 0, 1200, 700);
	iShowBMP(1072, 90, "red_1.bmp");
	iSetColor(0, 0, 0);
	iFilledRectangle(531, 392, 138, 138);
	iFilledRectangle(243, 217, 138, 138);
	iFilledRectangle(435, 217, 138, 138);
	iFilledRectangle(627, 217, 138, 138);
	iFilledRectangle(819, 217, 138, 138);
	iSetColor(0, 0, 0);
	iFilledRectangle(1100, 20, 80, 30);
	iSetColor(255, 255, 109);
	iText(1125, 31, "Exit");
	if (ch == 'i')
	{
		iShowBMP(536, 397, choose_i);
		iShowBMP(248, 222, "alp_i.bmp");
		iShowBMP(440, 222, picture_j);
		iShowBMP(632, 222, picture_k);
		iShowBMP(824, 222, picture_l);
	}
	if (ch == 'j')
	{
		iShowBMP(536, 397, choose_j);
		iShowBMP(248, 222, "alp_j.bmp");
		iShowBMP(440, 222, picture_i);
		iShowBMP(632, 222, picture_k);
		iShowBMP(824, 222, picture_l);
	}
	if (ch == 'k')
	{
		iShowBMP(536, 397, choose_k);
		iShowBMP(248, 222, "alp_k.bmp");
		iShowBMP(440, 222, picture_j);
		iShowBMP(632, 222, picture_i);
		iShowBMP(824, 222, picture_l);
	}
	if (ch == 'l')
	{
		iShowBMP(536, 397, choose_l);
		iShowBMP(248, 222, "alp_l.bmp");
		iShowBMP(440, 222, picture_j);
		iShowBMP(632, 222, picture_k);
		iShowBMP(824, 222, picture_i);
	}
	if (ch == 'm')
	{
		iShowBMP(536, 397, choose_m);
		iShowBMP(440, 222, "alp_m.bmp");
		iShowBMP(248, 222, picture_n);
		iShowBMP(632, 222, picture_o);
		iShowBMP(824, 222, picture_p);
	}
	if (ch == 'n')
	{
		iShowBMP(536, 397, choose_n);
		iShowBMP(440, 222, "alp_n.bmp");
		iShowBMP(248, 222, picture_m);
		iShowBMP(632, 222, picture_o);
		iShowBMP(824, 222, picture_p);
	}
	if (ch == 'o')
	{
		iShowBMP(536, 397, choose_o);
		iShowBMP(440, 222, "alp_o.bmp");
		iShowBMP(248, 222, picture_n);
		iShowBMP(632, 222, picture_m);
		iShowBMP(824, 222, picture_p);
	}
	if (ch == 'p')
	{
		iShowBMP(536, 397, choose_p);
		iShowBMP(440, 222, "alp_p.bmp");
		iShowBMP(248, 222, picture_n);
		iShowBMP(632, 222, picture_o);
		iShowBMP(824, 222, picture_m);
	}
	if (ch == 'q')
	{
		iShowBMP(536, 397, choose_q);
		iShowBMP(632, 222, "alp_q.bmp");
		iShowBMP(248, 222, picture_r);
		iShowBMP(440, 222, picture_s);
		iShowBMP(824, 222, picture_t);
	}
	if (ch == 'r')
	{
		iShowBMP(536, 397, choose_r);
		iShowBMP(632, 222, "alp_r.bmp");
		iShowBMP(248, 222, picture_q);
		iShowBMP(440, 222, picture_s);
		iShowBMP(824, 222, picture_t);
	}
	if (ch == 's')
	{
		iShowBMP(536, 397, choose_s);
		iShowBMP(632, 222, "alp_s.bmp");
		iShowBMP(248, 222, picture_r);
		iShowBMP(440, 222, picture_q);
		iShowBMP(824, 222, picture_t);
	}
	if (ch == 't')
	{
		iShowBMP(536, 397, choose_t);
		iShowBMP(632, 222, "alp_t.bmp");
		iShowBMP(248, 222, picture_r);
		iShowBMP(440, 222, picture_s);
		iShowBMP(824, 222, picture_q);
	}
	if (ch == 'u')
	{
		iShowBMP(536, 397, choose_u);
		iShowBMP(824, 222, "alp_u.bmp");
		iShowBMP(248, 222, picture_v);
		iShowBMP(440, 222, picture_w);
		iShowBMP(632, 222, picture_x);
	}
	if (ch == 'v')
	{
		iShowBMP(536, 397, choose_v);
		iShowBMP(824, 222, "alp_v.bmp");
		iShowBMP(248, 222, picture_u);
		iShowBMP(440, 222, picture_w);
		iShowBMP(632, 222, picture_x);
	}
	if (ch == 'w')
	{
		iShowBMP(536, 397, choose_w);
		iShowBMP(824, 222, "alp_w.bmp");
		iShowBMP(248, 222, picture_v);
		iShowBMP(440, 222, picture_u);
		iShowBMP(632, 222, picture_x);
	}
	if (ch == 'x')
	{
		iShowBMP(536, 397, choose_x);
		iShowBMP(824, 222, "alp_x.bmp");
		iShowBMP(248, 222, picture_v);
		iShowBMP(440, 222, picture_w);
		iShowBMP(632, 222, picture_u);
	}
}
void number_option(void)
{
	iSetColor(128, 0, 64);
	iFilledRectangle(0, 0, 1200, 700);
	iSetColor(0, 0, 0);
	iFilledRectangle(300, 400, 600, 80);
	iFilledRectangle(300, 220, 600, 80);
	iSetColor(255, 255, 70);
	iFilledRectangle(305, 405, 590, 70);
	iFilledRectangle(305, 225, 590, 70);
	iSetColor(0, 0, 0);
	iText(450, 430, "MATCHING NUMBER TO PICTURE", GLUT_BITMAP_HELVETICA_18);
	iText(450, 250, "MATCHING PICTURE TO NUMBER", GLUT_BITMAP_HELVETICA_18);
	iSetColor(255, 255, 70);
	iFilledRectangle(40, 40, 80, 40);
	iSetColor(128, 0, 64);
	iText(50, 55, "<-Back", GLUT_BITMAP_HELVETICA_18);
	iSetColor(255, 255, 70);
	iFilledRectangle(1100, 20, 80, 30);
	iFilledRectangle(990, 20, 90, 30);
	iSetColor(128, 0, 64);
	iText(1000, 31, "Main Menu");
	iText(1125, 31, "Exit");
}

void num_func(int n)
{
	iSetColor(255, 0, 128);
	iFilledRectangle(0, 0, 1200, 700);
	iShowBMP(1072, 90, "red_1.bmp");
	iSetColor(0, 0, 0);
	iFilledRectangle(531, 392, 138, 138);
	iFilledRectangle(243, 217, 138, 138);
	iFilledRectangle(435, 217, 138, 138);
	iFilledRectangle(627, 217, 138, 138);
	iFilledRectangle(819, 217, 138, 138);

	iSetColor(255, 255, 70);  //added
	iFilledRectangle(40, 40, 80, 40);
	iSetColor(128, 0, 64);
	iText(50, 55, "<-Back", GLUT_BITMAP_HELVETICA_18);  //added
	iSetColor(0, 0, 0);
	iFilledRectangle(1100, 20, 80, 30);
	iSetColor(255, 255, 109);
	iText(1125, 31, "Exit");
	if (n == 1)
	{
		iShowBMP(536, 397, "num1.bmp");
		iShowBMP(440, 222, "1.bmp");
		iShowBMP(248, 222, "10.bmp");
		iShowBMP(824, 222, "3.bmp");
		iShowBMP(632, 222, "8.bmp");
	}
	if (n == 2)
	{
		iShowBMP(536, 397, "num2.bmp");
		iShowBMP(440, 222, "2.bmp"); //248
		iShowBMP(248, 222, "9.bmp");
		iShowBMP(824, 222, "5.bmp");
		iShowBMP(632, 222, "7.bmp");
	}
	if (n == 3)
	{
		iShowBMP(536, 397, "num3.bmp");
		iShowBMP(440, 222, "3.bmp"); //824
		iShowBMP(248, 222, "8.bmp");  //248
		iShowBMP(824, 222, "6.bmp"); //440
		iShowBMP(632, 222, "1.bmp"); //632
	}
	if (n == 4)
	{
		iShowBMP(536, 397, "num4.bmp");
		iShowBMP(440, 222, "4.bmp");
		iShowBMP(248, 222, "5.bmp");
		iShowBMP(824, 222, "9.bmp");
		iShowBMP(632, 222, "2.bmp");
	}
	if (n == 5)
	{
		iShowBMP(536, 397, "num5.bmp");
		iShowBMP(440, 222, "5.bmp");
		iShowBMP(248, 222, "7.bmp");
		iShowBMP(824, 222, "3.bmp");
		iShowBMP(632, 222, "1.bmp");
	}
	if (n == 6)
	{
		iShowBMP(536, 397, "num6.bmp");
		iShowBMP(440, 222, "6.bmp");
		iShowBMP(248, 222, "10.bmp");
		iShowBMP(824, 222, "4.bmp");
		iShowBMP(632, 222, "5.bmp");
	}
	if (n == 7)
	{
		iShowBMP(536, 397, "num7.bmp");
		iShowBMP(440, 222, "7.bmp");
		iShowBMP(248, 222, "3.bmp");
		iShowBMP(824, 222, "10.bmp");
		iShowBMP(632, 222, "5.bmp");
	}
	if (n == 8)
	{
		iShowBMP(536, 397, "num8.bmp");
		iShowBMP(440, 222, "8.bmp");
		iShowBMP(248, 222, "1.bmp");
		iShowBMP(824, 222, "6.bmp");
		iShowBMP(632, 222, "4.bmp");
	}
	if (n == 9)
	{
		iShowBMP(536, 397, "num9.bmp");
		iShowBMP(440, 222, "9.bmp");
		iShowBMP(248, 222, "3.bmp");
		iShowBMP(824, 222, "1.bmp");
		iShowBMP(632, 222, "7.bmp");
	}
	if (n == 10)
	{
		iShowBMP(536, 397, "num10.bmp");
		iShowBMP(440, 222, "10.bmp");
		iShowBMP(248, 222, "3.bmp");
		iShowBMP(824, 222, "6.bmp");
		iShowBMP(632, 222, "9.bmp");
	}

}
void palta(int n)
{
	iSetColor(255, 0, 128);
	iFilledRectangle(0, 0, 1200, 700);
	iShowBMP(1072, 90, "red_1.bmp");
	iSetColor(0, 0, 0);
	iFilledRectangle(531, 392, 138, 138);
	iFilledRectangle(243, 217, 138, 138);
	iFilledRectangle(435, 217, 138, 138);
	iFilledRectangle(627, 217, 138, 138);
	iFilledRectangle(819, 217, 138, 138);
	iSetColor(0, 0, 0);
	iFilledRectangle(1100, 20, 80, 30);
	iSetColor(255, 255, 109);
	iText(1125, 31, "Exit");
	if (n == 1)
	{
		iShowBMP(536, 397, "1.bmp");
		iShowBMP(440, 222, "num1.bmp");
		iShowBMP(248, 222, "num10.bmp");
		iShowBMP(824, 222, "num3.bmp");
		iShowBMP(632, 222, "num8.bmp");
	}
	if (n == 2)
	{
		iShowBMP(536, 397, "2.bmp");
		iShowBMP(440, 222, "num2.bmp");
		iShowBMP(248, 222, "num9.bmp");
		iShowBMP(824, 222, "num5.bmp");
		iShowBMP(632, 222, "num7.bmp");
	}
	if (n == 3)
	{
		iShowBMP(536, 397, "3.bmp");
		iShowBMP(440, 222, "num3.bmp");
		iShowBMP(248, 222, "num8.bmp");
		iShowBMP(824, 222, "num6.bmp");
		iShowBMP(632, 222, "num1.bmp");
	}
	if (n == 4)
	{
		iShowBMP(536, 397, "4.bmp");
		iShowBMP(440, 222, "num4.bmp");
		iShowBMP(248, 222, "num5.bmp");
		iShowBMP(824, 222, "num9.bmp");
		iShowBMP(632, 222, "num2.bmp");
	}
	if (n == 5)
	{
		iShowBMP(536, 397, "5.bmp");
		iShowBMP(440, 222, "num5.bmp");
		iShowBMP(248, 222, "num7.bmp");
		iShowBMP(824, 222, "num3.bmp");
		iShowBMP(632, 222, "num1.bmp");
	}
	if (n == 6)
	{
		iShowBMP(536, 397, "6.bmp");
		iShowBMP(440, 222, "num6.bmp");
		iShowBMP(248, 222, "num10.bmp");
		iShowBMP(824, 222, "num4.bmp");
		iShowBMP(632, 222, "num5.bmp");
	}
	if (n == 7)
	{
		iShowBMP(536, 397, "7.bmp");
		iShowBMP(440, 222, "num7.bmp");
		iShowBMP(248, 222, "num3.bmp");
		iShowBMP(824, 222, "num10.bmp");
		iShowBMP(632, 222, "num5.bmp");
	}
	if (n == 8)
	{
		iShowBMP(536, 397, "8.bmp");
		iShowBMP(440, 222, "num8.bmp");
		iShowBMP(248, 222, "num1.bmp");
		iShowBMP(824, 222, "num6.bmp");
		iShowBMP(632, 222, "num4.bmp");
	}
	if (n == 9)
	{
		iShowBMP(536, 397, "9.bmp");
		iShowBMP(440, 222, "num9.bmp");
		iShowBMP(248, 222, "num3.bmp");
		iShowBMP(824, 222, "num1.bmp");
		iShowBMP(632, 222, "num7.bmp");
	}
	if (n == 10)
	{
		iShowBMP(536, 397, "10.bmp");
		iShowBMP(440, 222, "num10.bmp");
		iShowBMP(248, 222, "num3.bmp");
		iShowBMP(824, 222, "num6.bmp");
		iShowBMP(632, 222, "num9.bmp");
	}
}
void iDraw()
{
	iClear();
	if (learn == 1)
	{
		first_page();
	}
	if (choose == 3) colorDraw();
	if (choose == 2)
	{
		nb_draw();
	}
	if (choose == 1)
	{
		lphabet_draw();
	}
	
	//if (choose == 4) humanBodyDraw();
	if (a >= 0 && a<8)
	{
		aprint();
	}

	if (b >= 0 && b<11)
	{
		bprint();
	}
	if (c >= 0 && c<10)
	{
		cprint();
	}
	if (d >= 0 && d<9)
	{
		dprint();
	}
	if (e >= 0 && e<8)
	{
		eprint();
	}
	if (f >= 0 && f<10)
	{
		fprint();
	}
	if (g >= 0 && g<11)
	{
		gprint();
	}
	if (h >= 0 && h<8)
	{
		hprint();
	}
	if (i >= 0 && i<8)
	{
		iprint();
	}
	if (j >= 0 && j<8)
	{
		jprint();
	}
	if (k >= 0 && k<9)
	{
		kprint();
	}
	if (l >= 0 && l<10)
	{
		lprint();
	}
	if (m >= 0 && m<8)
	{
		mprint();
	}
	if (n >= 0 && n<8)
	{
		nprint();
	}
	if (o >= 0 && o<9)
	{
		oprint();
	}
	if (p >= 0 && p<10)
	{
		pprint();
	}
	if (q >= 0 && q<5)
	{
		qprint();
	}
	if (r >= 0 && r<11)
	{
		rprint();
	}
	if (s >= 0 && s<10)
	{
		sprint();
	}

	if (t >= 0 && t<10)
	{
		tprint();
	}
	if (u >= 0 && u<2)
	{
		uprint();
	}
	if (v >= 0 && v<3)
	{
		vprint();
	}
	if (w >= 0 && w<8)
	{
		wprint();
	}
	if (x >= 0 && x<2)
	{
		xprint();
	}
	if (y >= 0 && y<5)
	{
		yprint();
	}
	if (z >= 0 && z<4)
	{
		zprint();
	}
	if (bb >= 0 && bb<3)
	{
		two_2();
	}
	if (cc >= 0 && cc<3)
	{
		three_3();
	}
	if (dd >= 0 && dd<3)
	{
		four_4();
	}
	if (ee >= 0 && ee<3)
	{
		five_5();
	}

	if (ff >= 0 && ff<3)
	{
		six_6();
	}
	if (gg >= 0 && gg<3)
	{
		seven_7();
	}
	if (hh >= 0 && hh<3)
	{
		eight_8();
	}
	if (ii >= 0 && ii<3)
	{
		nine_9();
	}
	if (jj >= 0 && jj<3)
	{
		ten_10();
	}
	if (yy >= 0 && yy<3)
	{
		one_1();
	}
	if (back == 1)
	{
		back = 0;
		first_page();
	}
	if (mainmenu == 1)
	{
		main_menu();
	}
	if (quiz == 1)
	{
		quiz_func();
	}
	if (alphabet == 1)
	{
		alphabet_func();
	}
	if (number == 1)
	{
		number_option();
	}
	if (n_p1 == 1)
	{
		num_func(10);
	}
	if (n_p2 == 1)
	{
		num_func(9);
	}
	if (n_p3 == 1)
	{
		num_func(8);
	}
	if (n_p4 == 1)
	{
		num_func(7);
	}
	if (n_p5 == 1)
	{
		num_func(6);
	}
	if (n_p6 == 1)
	{
		num_func(5);
	}
	if (n_p7 == 1)
	{
		num_func(4);
	}
	if (n_p8 == 1)
	{
		num_func(3);
	}
	if (n_p9 == 1)
	{
		num_func(2);
	}
	if (n_p10 == 1)
	{
		num_func(1);
	}
	if (p_n1 == 1)
	{
		palta(1);
	}
	if (p_n2 == 1)
	{
		palta(2);
	}
	if (p_n3 == 1)
	{
		palta(3);
	}
	if (p_n4 == 1)
	{
		palta(4);
	}
	if (p_n5 == 1)
	{
		palta(5);
	}
	if (p_n6 == 1)
	{
		palta(6);
	}
	if (p_n7 == 1)
	{
		palta(7);
	}
	if (p_n8 == 1)
	{
		palta(8);
	}
	if (p_n9 == 1)
	{
		palta(9);
	}
	if (p_n10 == 1)
	{
		palta(10);
	}
	if (ques_1 == 1)
	{
		ques_func('a');
	}
	if (ques_2 == 1)
	{
		ques_func('e');
	}
	if (ques_3 == 1)
	{
		ques_func('i');
	}
	if (ques_4 == 1)
	{
		ques_func('m');
	}
	if (ques_5 == 1)
	{
		ques_func('b');
	}
	if (ques_6 == 1)
	{
		ques_func('f');
	}
	if (ques_7 == 1)
	{
		ques_func('j');
	}
	if (ques_8 == 1)
	{
		ques_func('n');
	}
	if (ques_9 == 1)
	{
		ques_func('c');
	}
	if (ques_10 == 1)
	{
		ques_func('g');
	}
	if (ques_11 == 1)
	{
		ques_func('k');
	}
	if (ques_12 == 1)
	{
		ques_func('o');
	}
	if (ques_13 == 1)
	{
		ques_func('d');
	}
	if (ques_14 == 1)
	{
		ques_func('h');
	}
	if (ques_15 == 1)
	{
		ques_func('l');
	}
	if (ques_16 == 1)
	{
		ques_func('p');
	}
	if (qu_1 == 1)
	{
		ulta_func('x');
	}
	if (qu_2 == 1)
	{
		ulta_func('t');
	}
	if (qu_3 == 1)
	{
		ulta_func('p');
	}
	if (qu_4 == 1)
	{
		ulta_func('l');
	}
	if (qu_5 == 1)
	{
		ulta_func('w');
	}
	if (qu_6 == 1)
	{
		ulta_func('s');
	}
	if (qu_7 == 1)
	{
		ulta_func('o');
	}
	if (qu_8 == 1)
	{
		ulta_func('k');
	}
	if (qu_9 == 1)
	{
		ulta_func('v');
	}
	if (qu_10 == 1)
	{
		ulta_func('r');
	}
	if (qu_11 == 1)
	{
		ulta_func('n');
	}
	if (qu_12 == 1)
	{
		ulta_func('j');
	}
	if (qu_13 == 1)
	{
		ulta_func('u');
	}
	if (qu_14 == 1)
	{
		ulta_func('q');
	}
	if (qu_15 == 1)
	{
		ulta_func('m');
	}
	if (qu_16 == 1)
	{
		ulta_func('i');
	}
	if (right_a == 1)
	{
		iShowBMP(248, 222, "right.bmp");
	}
	else if (right_b == 1)
	{
		iShowBMP(440, 222, "right.bmp");
	}
	else if (right_c == 1)
	{
		iShowBMP(632, 222, "right.bmp");
	}
	else if (right_d == 1)
	{
		iShowBMP(824, 222, "right.bmp");
	}
	if (wrong_a == 1)
	{
		iShowBMP(248, 222, "cross.bmp");
	}
	if (wrong_b == 1)
	{
		iShowBMP(440, 222, "cross.bmp");
	}
	if (wrong_c == 1)
	{
		iShowBMP(632, 222, "cross.bmp");
	}
	if (wrong_d == 1)
	{
		iShowBMP(824, 222, "cross.bmp");
	}
}




void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (1100 <= mx && 1180 <= mx && 20 <= my && my <= 50)
		{
			exit(0);
		}
		else if (mainmenu == 1)  // main menu te ki select korbo??
		{
			if (395 <= mx && mx <= 805 && 95 <= my && my <= 180) exit(0); // main menu te thaka kalin exit button

			else if (395<=mx && mx <= 805  && 270<=my && my <= 355)

			{
				mainmenu = 0;
				learn = 0;    // quiz  page e jabo .. baki sob baad
				quiz = 1;
			}
			else if ( 395<=mx && mx <= 805 && 445<=my && my <= 530)
			{
					mainmenu = 0;
					quiz = 0;   // learn e jabo ... baki sob baad
					learn = 1;
					choose = 0;
			}
		}
		if (learn == 1)  //main menu theke learn e dhukar por
		{
			
			if (0 <= mx && mx <= 100 && 620 <=my && my <= 670) // learn er bhitor back button
			{
					learn = 0;
					mainmenu = 1;  // abar menu te ferot jabo
			}
			if (510 <= mx && mx <= 730 && 350 <= my && my <= 400)
			{
				learn = 0;
				choose = 1;     // alpha k choose kora hoise.. erpor 26 ta blog alpha er jonno
			}
			

			if (choose == 1)
			{
///////////////////////////////////////////////// ekhan theke 26 ta blog alpha er jonno shhuru //////////////////////////////////
				if (mx >= 100 && mx <= 200)  // alpha er bhitore back button
				{
					if (my >= 640 && my <= 690)
					{
						back = 1;
						PlaySound("silent.wav", NULL, SND_FILENAME | SND_ASYNC);
						choose = 0;
						a = -1, b = -1, c = -1, d = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1, yy = -1, bb = -1, cc = -1, dd = -1, ee = -1, ff = -1, gg = -1, hh = -1, ii = -1, jj = -1;
					}
				}
				if (mx >= 792 && mx <= 856)
				{
					if (my >= 600 && my <= 664)
					{
						a = 0;
						PlaySound(asound[a], NULL, SND_FILENAME | SND_ASYNC);
						b = -1, c = -1, d = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}

				if (a >= 0 && a<8)
				{
					if (a<7)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								a = a + 1;
								PlaySound(asound[a], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (a>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								a = a - 1;
								PlaySound(asound[a], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}

				if (mx >= 872 && mx <= 936)
				{
					if (my >= 600 && my <= 664)
					{
						b = 0;
						PlaySound(bsound[b], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, c = -1, d = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (b >= 0 && b<11)
				{
					if (b<10)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								b = b + 1;
								PlaySound(bsound[b], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (b>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								b = b - 1;
								PlaySound(bsound[b], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 952 && mx <= 1016)
				{
					if (my >= 600 && my <= 664)
					{
						c = 0;
						PlaySound(csound[c], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, d = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (c >= 0 && c<10)
				{
					if (c<9)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								c = c + 1;
								PlaySound(csound[c], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (c>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								c = c - 1;
								PlaySound(csound[c], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}

				if (mx >= 1032 && mx <= 1096)
				{
					if (my >= 600 && my <= 664)
					{
						d = 0;
						PlaySound(dsound[d], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, c = -1, b = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (d >= 0 && d<9)
				{
					if (d<8)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								d = d + 1;
								PlaySound(dsound[d], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (d>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								d = d - 1;
								PlaySound(dsound[d], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 792 && mx <= 856)
				{
					if (my >= 500 && my <= 564)
					{
						e = 0;
						PlaySound(esound[e], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, d = -1, c = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (e >= 0 && e<8)
				{
					if (e<7)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								e = e + 1;
								PlaySound(esound[e], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (e>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								e = e - 1;
								PlaySound(esound[e], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 872 && mx <= 936)
				{
					if (my >= 500 && my <= 564)
					{
						f = 0;
						PlaySound(fsound[f], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, d = -1, e = -1, c = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (f >= 0 && f<9)
				{
					if (f<9)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								f = f + 1;
								PlaySound(fsound[f], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (f>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								f = f - 1;
								PlaySound(fsound[f], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 952 && mx <= 1016)
				{
					if (my >= 500 && my <= 564)
					{
						g = 0;
						PlaySound(gsound[g], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, d = -1, e = -1, f = -1, c = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (g >= 0 && g<11)
				{
					if (g<10)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								g = g + 1;
								PlaySound(gsound[g], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (g>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								g = g - 1;
								PlaySound(gsound[g], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 1032 && mx <= 1096)
				{
					if (my >= 500 && my <= 564)
					{
						h = 0;
						PlaySound(hsound[h], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, d = -1, e = -1, f = -1, g = -1, c = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (h >= 0 && h<8)
				{
					if (h<7)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								h = h + 1;
								PlaySound(hsound[h], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (h>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								h = h - 1;
								PlaySound(hsound[h], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 792 && mx <= 856)
				{
					if (my >= 400 && my <= 464)
					{
						i = 0;
						PlaySound(isound[i], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, c = -1, d = -1, e = -1, f = -1, g = -1, h = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (i >= 0 && i<8)
				{
					if (i<7)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								i = i + 1;
								PlaySound(isound[i], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (i>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								i = i - 1;
								PlaySound(isound[i], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 872 && mx <= 936)
				{
					if (my >= 400 && my <= 464)
					{
						j = 0;
						PlaySound(jsound[j], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, d = -1, e = -1, c = -1, g = -1, h = -1, i = -1, f = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (j >= 0 && j<8)
				{
					if (j<7)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								j = j + 1;
								PlaySound(jsound[j], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (j>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								j = j - 1;
								PlaySound(jsound[j], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 952 && mx <= 1016)
				{
					if (my >= 400 && my <= 464)
					{
						k = 0;
						PlaySound(ksound[k], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, d = -1, e = -1, f = -1, c = -1, h = -1, i = -1, j = -1, g = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (k >= 0 && k<9)
				{
					if (k<8)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								k = k + 1;
								PlaySound(ksound[k], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (k>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								k = k - 1;
								PlaySound(ksound[k], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 1032 && mx <= 1096)
				{
					if (my >= 400 && my <= 464)
					{
						l = 0;
						PlaySound(lsound[l], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, d = -1, e = -1, f = -1, g = -1, c = -1, i = -1, j = -1, k = -1, h = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (l >= 0 && l<10)
				{
					if (l<9)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								l = l + 1;
								PlaySound(lsound[l], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (l>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								l = l - 1;
								PlaySound(lsound[l], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 792 && mx <= 856)
				{
					if (my >= 300 && my <= 364)
					{
						m = 0;
						PlaySound(msound[m], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, c = -1, d = -1, e = -1, f = -1, g = -1, h = -1, j = -1, k = -1, l = -1, i = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (m >= 0 && m<8)
				{
					if (m<7)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								m = m + 1;
								PlaySound(msound[m], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (m>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								m = m - 1;
								PlaySound(msound[m], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 872 && mx <= 936)
				{
					if (my >= 300 && my <= 364)
					{
						n = 0;
						PlaySound(nsound[n], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, d = -1, e = -1, c = -1, g = -1, h = -1, i = -1, f = -1, k = -1, l = -1, m = -1, j = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (n >= 0 && n<8)
				{
					if (n<7)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								n = n + 1;
								PlaySound(nsound[n], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (n>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								n = n - 1;
								PlaySound(nsound[n], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 952 && mx <= 1016)
				{
					if (my >= 300 && my <= 364)
					{
						o = 0;
						PlaySound(osound[o], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, d = -1, e = -1, f = -1, c = -1, h = -1, i = -1, j = -1, g = -1, l = -1, m = -1, n = -1, k = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (o >= 0 && o<9)
				{
					if (o<8)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								o = o + 1;
								PlaySound(osound[o], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (o>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								o = o - 1;
								PlaySound(osound[o], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 1032 && mx <= 1096)
				{
					if (my >= 300 && my <= 364)
					{
						p = 0;
						PlaySound(psound[p], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, d = -1, e = -1, f = -1, g = -1, c = -1, i = -1, j = -1, k = -1, h = -1, m = -1, n = -1, o = -1, l = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (p >= 0 && p<10)
				{
					if (p<9)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								p = p + 1;
								PlaySound(psound[p], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (p>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								p = p - 1;
								PlaySound(psound[p], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 792 && mx <= 856)
				{
					if (my >= 200 && my <= 264)
					{
						q = 0;
						PlaySound(qsound[q], NULL, SND_FILENAME | SND_ASYNC);
						b = -1, c = -1, d = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, a = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}

				if (q >= 0 && q<5)
				{
					if (q<4)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								q = q + 1;
								PlaySound(qsound[q], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (q>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								q = q - 1;
								PlaySound(qsound[q], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}

				if (mx >= 872 && mx <= 936)
				{
					if (my >= 200 && my <= 264)
					{
						r = 0;
						PlaySound(rsound[r], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, c = -1, d = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, b = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (r >= 0 && r<11)
				{
					if (r<10)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								r = r + 1;
								PlaySound(rsound[r], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (r>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								r = r - 1;
								PlaySound(rsound[r], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 952 && mx <= 1016)
				{
					if (my >= 200 && my <= 264)
					{
						s = 0;
						PlaySound(ssound[s], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, c = -1, d = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, t = -1, u = -1, v = -1, w = -1, x = -1, z = -1, y = -1;
					}
				}
				if (s >= 0 && s<10)
				{
					if (s<9)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								s = s + 1;
								PlaySound(ssound[s], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (s>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								s = s - 1;
								PlaySound(ssound[s], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}


				if (mx >= 1032 && mx <= 1096)
				{
					if (my >= 200 && my <= 264)
					{
						t = 0;
						PlaySound(tsound[t], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, c = -1, d = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (t >= 0 && t<10)
				{
					if (t<9)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								t = t + 1;
								PlaySound(tsound[t], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (t>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								t = t - 1;
								PlaySound(tsound[t], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
				}
				if (mx >= 792 && mx <= 856)
				{
					if (my >= 100 && my <= 164)
					{
						u = 0;
						PlaySound(usound[u], NULL, SND_FILENAME | SND_ASYNC);
						b = -1, c = -1, d = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, a = -1, r = -1, s = -1, t = -1, q = -1, v = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}

				if (u >= 0 && u<2)
				{
					if (u<1)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								u = u + 1;
								PlaySound(usound[u], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (u>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								u = u - 1;
								PlaySound(usound[u], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}

				if (mx >= 872 && mx <= 936)
				{
					if (my >= 100 && my <= 164)
					{
						v = 0;
						PlaySound(vsound[v], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, c = -1, d = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, b = -1, s = -1, t = -1, u = -1, r = -1, w = -1, x = -1, y = -1, z = -1;
					}
				}
				if (v >= 0 && v<3)
				{
					if (v<2)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								v = v + 1;
								PlaySound(vsound[v], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (v>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								v = v - 1;
								PlaySound(vsound[v], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 952 && mx <= 1016)
				{
					if (my >= 100 && my <= 164)
					{
						w = 0;
						PlaySound(wsound[w], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, d = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, c = -1, t = -1, u = -1, v = -1, s = -1, x = -1, y = -1, z = -1;
					}
				}
				if (w >= 0 && w<8)
				{
					if (w<7)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								w = w + 1;
								PlaySound(wsound[w], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (w>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								w = w - 1;
								PlaySound(wsound[w], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}


				if (mx >= 1032 && mx <= 1096)
				{
					if (my >= 100 && my <= 164)
					{
						x = 0;
						PlaySound(xsound[x], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, c = -1, d = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, u = -1, v = -1, t = -1, w = -1, y = -1, z = -1;
					}
				}
				if (x >= 0 && x<2)
				{
					if (x<1)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								x = x + 1;
								PlaySound(xsound[x], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (x>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								x = x - 1;
								PlaySound(xsound[x], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
				}
				if (mx >= 872 && mx <= 936)
				{
					if (my >= 00 && my <= 64)
					{
						y = 0;
						PlaySound(ysound[y], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, c = -1, d = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, z = -1;
					}
				}
				if (y >= 0 && y<5)
				{
					if (y<4)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								y = y + 1;
								PlaySound(ysound[y], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (y>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								y = y - 1;
								PlaySound(ysound[y], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 952 && mx <= 1016)
				{
					if (my >= 00 && my <= 64)
					{
						z = 0;
						PlaySound(zsound[z], NULL, SND_FILENAME | SND_ASYNC);
						a = -1, b = -1, d = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, c = -1, t = -1, u = -1, v = -1, s = -1, x = -1, y = -1, w = -1;
					}
				}
				if (z >= 0 && z<4)
				{
					if (z<3)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								z = z + 1;
								PlaySound(zsound[z], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (z>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								z = z - 1;
								PlaySound(zsound[z], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
///////////////////////////////////////////// alpha er blog sesh//////////////////////////////////////////////////////////
			}
			else if ( 150<=my  && my <= 200 && 520 <=mx  && mx <= 720)
			{
				choose = 2;  // mane number choose korlam ....
			}
			if (choose == 2) // erpor 10 ta number jonno 10 ta if er blog
			{
///////////////////////////////////////// 10 tA number jonnno shuru //////////////////////////////////////////////////////
				if (mx >= 100 && mx <= 200)
				{
					if (my >= 640 && my <= 690)
					{
						back = 1;
						PlaySound("silent.wav", NULL, SND_FILENAME | SND_ASYNC);
						choose = 0;
						a = -1, b = -1, c = -1, d = -1, e = -1, f = -1, g = -1, h = -1, i = -1, j = -1, k = -1, l = -1, m = -1, n = -1, o = -1, p = -1, q = -1, r = -1, s = -1, t = -1, u = -1, v = -1, w = -1, x = -1, y = -1, z = -1, yy = -1, bb = -1, cc = -1, dd = -1, ee = -1, ff = -1, gg = -1, hh = -1, ii = -1, jj = -1;
					}
				}
				if (mx >= 712 && mx <= 776)
				{
					if (my >= 600 && my <= 664)
					{
						yy = 0;
						PlaySound(mnsound[yy], NULL, SND_FILENAME | SND_ASYNC);
						bb = -1, cc = -1, dd = -1, ee = -1, ff = -1, gg = -1, hh = -1, ii = -1, jj = -1;
					}
				}
				if (yy >= 0 && yy<3)
				{
					if (yy<2)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								yy = yy + 1;
								PlaySound(mnsound[yy], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (yy>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (
								my >= 16 && my <= 80)
							{
								yy = yy - 1;
								PlaySound(mnsound[yy], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 792 && mx <= 856)
				{
					if (my >= 600 && my <= 664)
					{
						bb = 0;
						PlaySound(twsound[bb], NULL, SND_FILENAME | SND_ASYNC);
						yy = -1, cc = -1, dd = -1, ee = -1, ff = -1, gg = -1, hh = -1, ii = -1, jj = -1;
					}
				}
				if (bb >= 0 && bb<3)
				{
					if (bb<2)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								bb = bb + 1;
								PlaySound(twsound[bb], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (bb>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								bb = bb - 1;
								PlaySound(twsound[bb], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 872 && mx <= 936)
				{
					if (my >= 600 && my <= 664)
					{

						cc = 0;
						PlaySound(thsound[cc], NULL, SND_FILENAME | SND_ASYNC);
						bb = -1, yy = -1, dd = -1, ee = -1, ff = -1, gg = -1, hh = -1, ii = -1, jj = -1;

					}
				}
				if (cc >= 0 && cc<3)
				{
					if (cc<2)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								cc = cc + 1;
								PlaySound(thsound[cc], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (cc>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								cc = cc - 1;
								PlaySound(thsound[cc], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 952 && mx <= 1016)
				{
					if (my >= 600 && my <= 664)
					{

						dd = 0;
						PlaySound(fosound[dd], NULL, SND_FILENAME | SND_ASYNC);
						bb = -1, cc = -1, yy = -1, ee = -1, ff = -1, gg = -1, hh = -1, ii = -1, jj = -1;

					}
				}
				if (dd >= 0 && dd<3)
				{
					if (dd<2)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								dd = dd + 1;
								PlaySound(fosound[dd], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (dd>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								dd = dd - 1;
								PlaySound(fosound[dd], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 1032 && mx <= 1096)
				{
					if (my >= 600 && my <= 664)
					{
						ee = 0;
						PlaySound(fisound[ee], NULL, SND_FILENAME | SND_ASYNC);
						bb = -1, cc = -1, dd = -1, yy = -1, ff = -1, gg = -1, hh = -1, ii = -1, jj = -1;

					}
				}
				if (ee >= 0 && ee<3)
				{
					if (ee<2)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								ee = ee + 1;
								PlaySound(fisound[ee], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (ee>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								ee = ee - 1;
								PlaySound(fisound[ee], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}

				if (mx >= 712 && mx <= 776)
				{
					if (my >= 500 && my <= 564)
					{
						ff = 0;
						PlaySound(sisound[ff], NULL, SND_FILENAME | SND_ASYNC);
						bb = -1, cc = -1, dd = -1, yy = -1, ee = -1, gg = -1, hh = -1, ii = -1, jj = -1;
					}
				}
				if (ff >= 0 && ff<3)
				{
					if (ff<2)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								ff = ff + 1;
								PlaySound(sisound[ff], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (ff>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								ff = ff - 1;
								PlaySound(sisound[ff], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 792 && mx <= 856)
				{
					if (my >= 500 && my <= 564)
					{
						gg = 0;
						PlaySound(sesound[gg], NULL, SND_FILENAME | SND_ASYNC);
						bb = -1, cc = -1, dd = -1, yy = -1, ff = -1, ee = -1, hh = -1, ii = -1, jj = -1;
					}
				}
				if (gg >= 0 && gg<3)
				{
					if (gg<2)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								gg = gg + 1;
								PlaySound(sesound[gg], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (gg>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								gg = gg - 1;
								PlaySound(sesound[gg], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 872 && mx <= 936)
				{
					if (my >= 500 && my <= 564)
					{
						hh = 0;
						PlaySound(eisound[hh], NULL, SND_FILENAME | SND_ASYNC);
						bb = -1, cc = -1, dd = -1, yy = -1, ff = -1, gg = -1, ee = -1, ii = -1, jj = -1;
					}
				}
				if (hh >= 0 && hh<3)
				{
					if (hh<2)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								hh = hh + 1;
								PlaySound(eisound[hh], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (hh>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								hh = hh - 1;
								PlaySound(eisound[hh], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 952 && mx <= 1016)
				{
					if (my >= 500 && my <= 564)
					{
						ii = 0;
						PlaySound(nisound[ii], NULL, SND_FILENAME | SND_ASYNC);
						bb = -1, cc = -1, dd = -1, yy = -1, ff = -1, gg = -1, hh = -1, ee = -1, jj = -1;
					}
				}
				if (ii >= 0 && ii<3)
				{
					if (ii<2)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								ii = ii + 1;
								PlaySound(nisound[ii], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (ii>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								ii = ii - 1;
								PlaySound(nisound[ii], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
				if (mx >= 1032 && mx <= 1096)
				{
					if (my >= 500 && my <= 564)
					{
						jj = 0;
						PlaySound(tesound[jj], NULL, SND_FILENAME | SND_ASYNC);
						bb = -1, cc = -1, dd = -1, yy = -1, ff = -1, gg = -1, hh = -1, ii = -1, ee = -1;
					}
				}
				if (jj >= 0 && jj<3)
				{
					if (jj<2)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								jj = jj + 1;
								PlaySound(tesound[jj], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (jj>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								jj = jj - 1;
								PlaySound(tesound[jj], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
				}
			}
///////////////////////// colors er jonno ///////////////////////
			else if (510 <= mx && mx <= 730 && 450 <= my && my <= 500)
			{
				/////(510, 450, 220, 50)
				learn = 0;
				choose = 3;     // means colors k choos kora hoise.. erpor 26 ta blog alpha er jonno
			}
			if (choose == 3)  // colors er jonno
			{
				colorChose= inputColor( mx ,  my);
			}
			if (colorChose != -1)
			{
				if (colorIndex >= 0 && colorIndex<3)
				{
					if (colorIndex<2)
					{
						if (mx >= 366 && mx <= 494)
						{
							if (my >= 16 && my <= 80)
							{
								colorIndex = colorIndex + 1;
								PlaySound(asound[a], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}
					if (colorIndex>0)
					{
						if (mx >= 218 && mx <= 346)
						{
							if (my >= 16 && my <= 80)
							{
								colorIndex = colorIndex - 1;
								PlaySound(asound[a], NULL, SND_FILENAME | SND_ASYNC);
							}
						}
					}

				}
			}
			if (510 <= mx && mx <= 730 && 350 <= my && my <= 400 && 0)
			{
				choose = 4;     
			}
			
			if (choose == 4) // human body r jonno
			{

			}
		}
		else if (quiz == 1)
		{
			if (my >= 20 && my <= 50)
			{
				if (mx >= 1100 && mx <= 1180)
					exit(0);
			}
			else if (mx >= 40 && mx <= 120)
			{
				if (my >= 40 && my <= 80)
				{
					alphabet = 0;
					mainmenu = 1;
					quiz = 0;
				}
			}
			if (my >= 345 && my <= 455)
			{
				if (mx >= 445 && mx <= 755)
				{
					alphabet = 1;
					quiz = 0;
					mainmenu = 0;
					number = 0;
				}
			}
			if (my >= 145 && my <= 255)
			{
				if (mx >= 445 && mx <= 755)
				{
					number = 1;
					quiz = 0;
					mainmenu = 0;
					alphabet = 0;
				}
			}
		}
		else if (alphabet == 1)
		{
			if (my >= 20 && my <= 50)
			{
				if (mx >= 1100 && mx <= 1180)
					exit(0);
			}
			if (my >= 20 && my <= 50)
			{
				if (mx >= 990 && mx <= 1080)
				{
					alphabet = 0;
					quiz = 0;
					number = 0;
					mainmenu = 1;
				}
			}

			if (mx >= 40 && mx <= 120)
			{
				if (my >= 40 && my <= 80)
				{
					alphabet = 0;
					quiz = 1;
					number = 0;
					mainmenu = 0;
				}
			}
			if (mx >= 300 && my <= 900)
			{
				if (my >= 220 && my <= 300)
				{
					qu_1 = 1;
					alphabet = 0;
					quiz = 0;
					mainmenu = 0;
					number = 0;
				}
				if (my >= 400 && my <= 480)
				{
					ques_1 = 1;
					alphabet = 0;
					quiz = 0;
					mainmenu = 0;
					number = 0;
				}
			}
		}
		else if (number == 1)
		{
			if (my >= 20 && my <= 50)
			{
				if (mx >= 1100 && mx <= 1180)
					exit(0);
				if (my >= 40 && my <= 80)
				{
					number = 0;
					quiz = 1;
					mainmenu = 0;
				}
			}
			if (mx >= 300 && my <= 900)
			{
				if (my >= 220 && my <= 300)
				{
					p_n1 = 1;
					number = 0;
					quiz = 0;
					mainmenu = 0;
					alphabet = 0;
					n_p1 = 0;
				}
				if (my >= 400 && my <= 480)
				{
					n_p1 = 1;
					number = 0;
					quiz = 0;
					mainmenu = 0;
					alphabet = 0;
					p_n2 = 0;
				}
			}
		}
		else if (n_p1 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					n_p1 = 1;
					right_a = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 440 && mx <= 568)
					{
						n_p1 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						n_p1 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						n_p1 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					n_p1 = 0;
					right_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					n_p2 = 1;
					PlaySound("9.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (n_p2 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 440 && mx <= 568)
				{
					n_p2 = 1;
					right_b = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						n_p2 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						n_p2 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						n_p2 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					n_p2 = 0;
					wrong_a = 0;
					right_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					n_p3 = 1;
					PlaySound("8.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (n_p3 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 632 && mx <= 760)
				{
					n_p3 = 1;
					right_c = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						n_p3 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						n_p3 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						n_p3 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					n_p3 = 0;
					wrong_a = 0;
					wrong_b = 0;
					right_c = 0;
					wrong_d = 0;
					n_p4 = 1;
					PlaySound("7.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (n_p4 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 824 && mx <= 952)
				{
					n_p4 = 1;
					right_d = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						n_p4 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						n_p4 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						n_p4 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					n_p4 = 0;
					wrong_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					right_d = 0;
					n_p5 = 1;
					PlaySound("6.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (n_p5 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					n_p5 = 1;
					right_a = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 440 && mx <= 568)
					{
						n_p5 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						n_p5 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						n_p5 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					n_p5 = 0;
					right_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					n_p6 = 1;
					PlaySound("5.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (n_p6 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 440 && mx <= 568)
				{
					n_p6 = 1;
					right_b = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						n_p6 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						n_p6 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						n_p6 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					n_p6 = 0;
					wrong_a = 0;
					right_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					n_p7 = 1;
					PlaySound("4.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (n_p7 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 632 && mx <= 760)
				{
					n_p7 = 1;
					right_c = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						n_p7 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						n_p7 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						n_p7 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					n_p7 = 0;
					wrong_a = 0;
					wrong_b = 0;
					right_c = 0;
					wrong_d = 0;
					n_p8 = 1;
					PlaySound("3.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (n_p8 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 824 && mx <= 952)
				{
					n_p8 = 1;
					right_d = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						n_p8 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						n_p8 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						n_p8 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					n_p8 = 0;
					wrong_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					right_d = 0;
					n_p9 = 1;
					PlaySound("2.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (n_p9 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					n_p9 = 1;
					right_a = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 440 && mx <= 568)
					{
						n_p9 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					else if (mx >= 632 && mx <= 760)
					{
						n_p9 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					else if (mx >= 824 && mx <= 952)
					{
						n_p9 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					n_p9 = 0;
					right_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					n_p10 = 1;
					PlaySound("1.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (n_p10 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 440 && mx <= 568)
				{
					n_p10 = 1;
					right_b = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						n_p10 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						n_p10 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						n_p10 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					n_p10 = 0;
					wrong_a = 0;
					right_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					number = 1;
				}
			}
		}
		if (p_n1 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 824 && mx <= 952)
				{
					p_n1 = 1;
					right_d = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						p_n1 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						p_n1 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						p_n1 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					p_n1 = 0;
					wrong_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					right_d = 0;
					p_n2 = 1;
				}
			}
		}
		else if (p_n2 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 632 && mx <= 760)
				{
					p_n2 = 1;
					right_c = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						p_n2 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						p_n2 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						p_n2 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					p_n2 = 0;
					wrong_a = 0;
					wrong_b = 0;
					right_c = 0;
					wrong_d = 0;
					p_n3 = 1;
				}
			}
		}
		else if (p_n3 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 440 && mx <= 568)
				{
					p_n3 = 1;
					right_b = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						p_n3 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						p_n3 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						p_n3 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					p_n3 = 0;
					wrong_a = 0;
					right_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					p_n4 = 1;
				}
			}
		}
		else if (p_n4 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					p_n4 = 1;
					right_a = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 440 && mx <= 568)
					{
						p_n4 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						p_n4 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						p_n4 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					p_n4 = 0;
					right_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					p_n5 = 1;
				}
			}
		}
		else if (p_n5 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 824 && mx <= 952)
				{
					p_n5 = 1;
					right_d = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						p_n5 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						p_n5 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						p_n5 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					p_n5 = 0;
					wrong_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					right_d = 0;
					p_n6 = 1;
				}
			}
		}
		else if (p_n6 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 632 && mx <= 760)
				{
					p_n6 = 1;
					right_c = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						p_n6 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						p_n6 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						p_n6 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					p_n6 = 0;
					wrong_a = 0;
					wrong_b = 0;
					right_c = 0;
					wrong_d = 0;
					p_n7 = 1;
				}
			}
		}
		else if (p_n7 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 440 && mx <= 568)
				{
					p_n7 = 1;
					right_b = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						p_n7 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						p_n7 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						p_n7 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					p_n7 = 0;
					wrong_a = 0;
					right_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					p_n8 = 1;
				}
			}
		}
		else if (p_n8 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					p_n8 = 1;
					right_a = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 440 && mx <= 568)
					{
						p_n8 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						p_n8 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						p_n8 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					p_n8 = 0;
					right_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					p_n9 = 1;
				}
			}
		}
		else if (p_n9 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 824 && mx <= 952)
				{
					p_n9 = 1;
					right_d = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						p_n9 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						p_n9 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						p_n9 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					p_n9 = 0;
					wrong_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					right_d = 0;
					p_n10 = 1;
				}
			}
		}
		else if (p_n10 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 440 && mx <= 568)
				{
					p_n10 = 1;
					right_b = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						p_n10 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						p_n10 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						p_n10 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					p_n10 = 0;
					wrong_a = 0;
					right_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					number = 1;
				}
			}
		}
		else if (ques_1 == 1)
		{
			PlaySound("a.wav", NULL, SND_FILENAME | SND_ASYNC);
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					ques_1 = 1;
					right_a = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 440 && mx <= 568)
					{
						ques_1 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						ques_1 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						ques_1 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					ques_1 = 0;
					right_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					ques_2 = 1;
					PlaySound("e.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (ques_2 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 440 && mx <= 568)
				{
					ques_2 = 1;
					right_b = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						ques_2 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						ques_2 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						ques_2 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					ques_2 = 0;
					wrong_a = 0;
					right_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					ques_3 = 1;
					PlaySound("i.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (ques_3 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 632 && mx <= 760)
				{
					ques_3 = 1;
					right_c = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						ques_3 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						ques_3 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						ques_3 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					ques_3 = 0;
					wrong_a = 0;
					wrong_b = 0;
					right_c = 0;
					wrong_d = 0;
					ques_4 = 1;
					PlaySound("m.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (ques_4 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 824 && mx <= 952)
				{
					ques_4 = 1;
					right_d = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						ques_4 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						ques_4 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						ques_4 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					ques_4 = 0;
					wrong_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					right_d = 0;
					ques_5 = 1;
					PlaySound("b.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (ques_5 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					ques_5 = 1;
					right_a = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 440 && mx <= 568)
					{
						ques_5 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						ques_5 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						ques_5 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					ques_5 = 0;
					right_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					ques_6 = 1;
					PlaySound("f.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (ques_6 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 440 && mx <= 568)
				{
					ques_6 = 1;
					right_b = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						ques_6 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						ques_6 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						ques_6 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					ques_6 = 0;
					wrong_a = 0;
					right_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					ques_7 = 1;
					PlaySound("j.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (ques_7 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 632 && mx <= 760)
				{
					ques_7 = 1;
					right_c = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						ques_7 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						ques_7 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						ques_7 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					ques_7 = 0;
					wrong_a = 0;
					wrong_b = 0;
					right_c = 0;
					wrong_d = 0;
					ques_8 = 1;
					PlaySound("n.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (ques_8 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 824 && mx <= 952)
				{
					ques_8 = 1;
					right_d = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						ques_8 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						ques_8 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						ques_8 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					ques_8 = 0;
					wrong_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					right_d = 0;
					ques_9 = 1;
					PlaySound("c.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (ques_9 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					ques_9 = 1;
					right_a = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 440 && mx <= 568)
					{
						ques_9 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						ques_9 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						ques_9 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					ques_9 = 0;
					right_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					ques_10 = 1;
					PlaySound("g.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (ques_10 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 440 && mx <= 568)
				{
					ques_10 = 1;
					right_b = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						ques_10 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						ques_10 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						ques_10 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					ques_10 = 0;
					wrong_a = 0;
					right_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					ques_11 = 1;
					PlaySound("k.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (ques_11 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 632 && mx <= 760)
				{
					ques_11 = 1;
					right_c = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						ques_11 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						ques_11 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						ques_11 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					ques_11 = 0;
					wrong_a = 0;
					wrong_b = 0;
					right_c = 0;
					wrong_d = 0;
					ques_12 = 1;
					PlaySound("o.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (ques_12 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					ques_12 = 1;
					wrong_a = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 440 && mx <= 568)
				{
					ques_12 = 1;
					wrong_b = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 632 && mx <= 760)
				{
					ques_12 = 1;
					wrong_c = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 824 && mx <= 952)
				{
					ques_12 = 1;
					right_d = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					ques_12 = 0;
					wrong_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					right_d = 0;
					ques_13 = 1;
					PlaySound("d", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (ques_13 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					ques_13 = 1;
					right_a = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 440 && mx <= 568)
				{
					ques_13 = 1;
					wrong_b = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 632 && mx <= 760)
				{
					ques_13 = 1;
					wrong_c = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 824 && mx <= 952)
				{
					ques_13 = 1;
					wrong_d = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					ques_13 = 0;
					right_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					ques_14 = 1;
					PlaySound("d", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (ques_14 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					ques_14 = 1;
					wrong_a = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 440 && mx <= 568)
				{
					ques_14 = 1;
					right_b = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 632 && mx <= 760)
				{
					ques_14 = 1;
					wrong_c = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 824 && mx <= 952)
				{
					ques_14 = 1;
					wrong_d = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					ques_14 = 0;
					wrong_a = 0;
					right_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					ques_15 = 1;
					PlaySound("l.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (ques_15 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					ques_15 = 1;
					wrong_a = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 440 && mx <= 568)
				{
					ques_15 = 1;
					wrong_b = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 632 && mx <= 760)
				{
					ques_15 = 1;
					right_c = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 824 && mx <= 952)
				{
					ques_15 = 1;
					wrong_d = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					ques_15 = 0;
					wrong_a = 0;
					wrong_b = 0;
					right_c = 0;
					wrong_d = 0;
					ques_16 = 1;
					PlaySound("p.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
		}
		else if (ques_16 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					ques_16 = 1;
					wrong_a = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 440 && mx <= 568)
				{
					ques_16 = 1;
					wrong_b = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 632 && mx <= 760)
				{
					ques_16 = 1;
					wrong_c = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 824 && mx <= 952)
				{
					ques_16 = 1;
					right_d = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					ques_16 = 0;
					wrong_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					right_d = 0;
					alphabet = 1;
				}
			}
		}
		else if (qu_1 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					qu_1 = 1;
					wrong_a = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 440 && mx <= 568)
				{
					qu_1 = 1;
					wrong_b = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 632 && mx <= 760)
				{
					qu_1 = 1;
					wrong_c = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 824 && mx <= 952)
				{
					qu_1 = 1;
					right_d = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					qu_1 = 0;
					wrong_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					right_d = 0;
					qu_2 = 1;
				}
			}
		}
		else if (qu_2 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					qu_2 = 1;
					wrong_a = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 440 && mx <= 568)
				{
					qu_2 = 1;
					wrong_b = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 632 && mx <= 760)
				{
					qu_2 = 1;
					right_c = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 824 && mx <= 952)
				{
					qu_2 = 1;
					wrong_d = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					qu_2 = 0;
					wrong_a = 0;
					wrong_b = 0;
					right_c = 0;
					wrong_d = 0;
					qu_3 = 1;
				}
			}
		}
		else if (qu_3 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					qu_3 = 1;
					wrong_a = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 440 && mx <= 568)
				{
					qu_3 = 1;
					right_b = 1;
				}
				else if (mx >= 632 && mx <= 760)
				{
					qu_3 = 1;
					wrong_c = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 824 && mx <= 952)
				{
					qu_3 = 1;
					wrong_d = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					qu_3 = 0;
					wrong_a = 0;
					right_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					qu_4 = 1;
				}
			}
		}
		else if (qu_4 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					qu_4 = 1;
					right_a = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 440 && mx <= 568)
				{
					qu_4 = 1;
					wrong_b = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 632 && mx <= 760)
				{
					qu_4 = 1;
					wrong_c = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 824 && mx <= 952)
				{
					qu_4 = 1;
					wrong_d = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					qu_4 = 0;
					right_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					qu_5 = 1;
				}
			}
		}
		else if (qu_5 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					qu_5 = 1;
					wrong_a = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 440 && mx <= 568)
				{
					qu_5 = 1;
					wrong_b = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 632 && mx <= 760)
				{
					qu_5 = 1;
					wrong_c = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 824 && mx <= 952)
				{
					qu_5 = 1;
					right_d = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					qu_5 = 0;
					wrong_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					right_d = 0;
					qu_6 = 1;
				}
			}
		}
		else if (qu_6 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					qu_6 = 1;
					wrong_a = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 440 && mx <= 568)
				{
					qu_6 = 1;
					wrong_b = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 632 && mx <= 760)
				{
					qu_6 = 1;
					right_c = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else if (mx >= 824 && mx <= 952)
				{
					qu_6 = 1;
					wrong_d = 1;
					PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					qu_6 = 0;
					wrong_a = 0;
					wrong_b = 0;
					right_c = 0;
					wrong_d = 0;
					qu_7 = 1;
				}
			}
		}
		else if (qu_7 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 440 && mx <= 568)
				{
					qu_7 = 1;
					right_b = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						qu_7 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						qu_7 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						qu_7 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					qu_7 = 0;
					wrong_a = 0;
					right_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					qu_8 = 1;
				}
			}
		}
		else if (qu_8 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					qu_8 = 1;
					right_a = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 440 && mx <= 568)
					{
						qu_8 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						qu_8 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						qu_8 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					qu_8 = 0;
					right_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					qu_9 = 1;
				}
			}
		}
		else if (qu_9 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 824 && mx <= 952)
				{
					qu_9 = 1;
					right_d = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						qu_9 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						qu_9 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						qu_9 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					qu_9 = 0;
					wrong_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					right_d = 0;
					qu_10 = 1;
				}
			}
		}
		else if (qu_10 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 632 && mx <= 760)
				{
					qu_10 = 1;
					right_c = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						qu_10 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						qu_10 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						qu_10 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					qu_10 = 0;
					wrong_a = 0;
					wrong_b = 0;
					right_c = 0;
					wrong_d = 0;
					qu_11 = 1;
				}
			}
		}
		else if (qu_11 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 440 && mx <= 568)
				{
					qu_11 = 1;
					right_b = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						qu_11 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						qu_11 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						qu_11 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					qu_11 = 0;
					wrong_a = 0;
					right_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					qu_12 = 1;
				}
			}
		}
		else if (qu_12 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					qu_12 = 1;
					right_a = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 440 && mx <= 568)
					{
						qu_12 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						qu_12 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						qu_12 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					qu_12 = 0;
					right_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					qu_13 = 1;
				}
			}
		}
		else if (qu_13 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 824 && mx <= 952)
				{
					qu_13 = 1;
					right_d = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						qu_13 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						qu_13 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						qu_13 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					qu_13 = 0;
					wrong_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					right_d = 0;
					qu_14 = 1;
				}
			}
		}
		else if (qu_14 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 632 && mx <= 760)
				{
					qu_14 = 1;
					right_c = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						qu_14 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 440 && mx <= 568)
					{
						qu_14 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						qu_14 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					qu_14 = 0;
					wrong_a = 0;
					wrong_b = 0;
					right_c = 0;
					wrong_d = 0;
					qu_15 = 1;
				}
			}
		}
		else if (qu_15 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 440 && mx <= 568)
				{
					qu_15 = 1;
					right_b = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 248 && mx <= 376)
					{
						qu_15 = 1;
						wrong_a = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						qu_15 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						qu_15 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					qu_15 = 0;
					wrong_a = 0;
					right_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					qu_16 = 1;
				}
			}
		}
		else if (qu_16 == 1)
		{
			if (my >= 222 && my <= 350)
			{
				if (mx >= 248 && mx <= 376)
				{
					qu_16 = 1;
					right_a = 1;
					PlaySound("right.wav", NULL, SND_FILENAME | SND_ASYNC);
				}
				else
				{
					if (mx >= 440 && mx <= 568)
					{
						qu_16 = 1;
						wrong_b = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 632 && mx <= 760)
					{
						qu_16 = 1;
						wrong_c = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
					if (mx >= 824 && mx <= 952)
					{
						qu_16 = 1;
						wrong_d = 1;
						PlaySound("name", NULL, SND_FILENAME | SND_ASYNC);
					}
				}
			}
			if (my >= 90 && my <= 218)
			{
				if (mx >= 1072 && mx <= 1200)
				{
					qu_16 = 0;
					right_a = 0;
					wrong_b = 0;
					wrong_c = 0;
					wrong_d = 0;
					alphabet = 1;
				}
			}
		}
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your code here
	}
}
void iMouseMove(int mx, int my)
{
	//place your codes here
}

void iKeyboard(unsigned char key)
{

}


void iSpecialKeyboard(unsigned char key)
{

	if (key == GLUT_KEY_END)
	{
		exit(0);
	}
}


int main()
{
	srand(time(NULL));
	rand_a = pic_a[rand() % 8];
	rand_b = pic_b[rand() % 10];
	rand_c = pic_c[rand() % 8];
	rand_d = pic_d[rand() % 10];
	rand_e = pic_e[rand() % 8];
	rand_f = pic_f[rand() % 9];
	rand_g = pic_g[rand() % 11];
	rand_h = pic_h[rand() % 8];
	rand_i = pic_i[rand() % 8];
	rand_j = pic_j[rand() % 8];
	rand_k = pic_k[rand() % 8];
	rand_l = pic_l[rand() % 9];
	rand_m = pic_m[rand() % 9];
	rand_n = pic_n[rand() % 7];
	rand_o = pic_o[rand() % 10];
	rand_p = pic_p[rand() % 9];
	rand_q = pic_q[rand() % 7];
	rand_r = pic_r[rand() % 11];
	rand_s = pic_s[rand() % 10];
	rand_t = pic_t[rand() % 10];
	rand_u = pic_u[rand() % 2];
	rand_v = pic_v[rand() % 3];
	rand_w = pic_w[rand() % 8];
	rand_x = pic_x[rand() % 2];
	rand_y = pic_y[rand() % 5];
	rand_z = pic_z[rand() % 4];
	choose_i = pic_i[rand() % 8];
	choose_j = pic_j[rand() % 8];
	choose_k = pic_k[rand() % 8];
	choose_l = pic_l[rand() % 9];
	choose_m = pic_m[rand() % 9];
	choose_n = pic_n[rand() % 7];
	choose_o = pic_o[rand() % 10];
	choose_p = pic_p[rand() % 9];
	choose_q = pic_q[rand() % 7];
	choose_r = pic_r[rand() % 11];
	choose_s = pic_s[rand() % 10];
	choose_t = pic_t[rand() % 10];
	choose_u = pic_u[rand() % 2];
	choose_v = pic_v[rand() % 3];
	choose_w = pic_w[rand() % 8];
	choose_x = pic_x[rand() % 2];
	choose_y = pic_y[rand() % 5];
	choose_z = pic_z[rand() % 4];
	printf("%s\n", choose_z);
	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n", rand_a, rand_b, rand_c, rand_d, rand_e, rand_f, rand_g, rand_h, rand_i, rand_j, rand_k, rand_l, rand_m, rand_n, rand_o, rand_p, rand_q, rand_r, rand_s, rand_t, rand_u, rand_v, rand_w, rand_x, rand_y, rand_z);
	char batil_a[22] = { 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char batil_b[22] = { 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char batil_c[22] = { 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char batil_d[22] = { 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char batil_e[22] = { 'a', 'b', 'c', 'd', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char batil_f[22] = { 'a', 'b', 'c', 'd', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char batil_g[22] = { 'a', 'b', 'c', 'd', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char batil_h[22] = { 'a', 'b', 'c', 'd', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char batil_i[22] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char batil_j[22] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char batil_k[22] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char batil_l[22] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char batil_m[22] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char batil_n[22] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char batil_o[22] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char batil_p[22] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	char ran_a = batil_a[rand() % 22];
	char ran_b = batil_b[rand() % 22];
	char ran_c = batil_c[rand() % 22];
	char ran_d = batil_d[rand() % 22];
	char ran_e = batil_e[rand() % 22];
	char ran_f = batil_f[rand() % 22];
	char ran_g = batil_g[rand() % 22];
	char ran_h = batil_h[rand() % 22];
	char ran_i = batil_i[rand() % 22];
	char ran_j = batil_j[rand() % 22];
	char ran_k = batil_k[rand() % 22];
	char ran_l = batil_l[rand() % 22];
	char ran_m = batil_m[rand() % 22];
	char ran_n = batil_n[rand() % 22];
	char ran_o = batil_o[rand() % 22];
	char ran_p = batil_p[rand() % 22];
	if (ran_a == 'e')
		exp_a = rand_e;
	if (ran_a == 'f')
		exp_a = rand_f;
	if (ran_a == 'g')
		exp_a = rand_g;
	if (ran_a == 'h')
		exp_a = rand_h;
	if (ran_a == 'i')
		exp_a = rand_i;
	if (ran_a == 'j')
		exp_a = rand_p;
	if (ran_a == 'k')
		exp_a = rand_k;
	if (ran_a == 'l')
		exp_a = rand_l;
	if (ran_a == 'm')
		exp_a = rand_m;
	if (ran_a == 'n')
		exp_a = rand_n;
	if (ran_a == 'o')
		exp_a = rand_o;
	if (ran_a == 'p')
		exp_a = rand_p;
	if (ran_a == 'q')
		exp_a = rand_q;
	if (ran_a == 'r')
		exp_a = rand_r;
	if (ran_a == 's')
		exp_a = rand_s;
	if (ran_a == 't')
		exp_a = rand_t;
	if (ran_a == 'u')
		exp_a = rand_u;
	if (ran_a == 'v')
		exp_a = rand_v;
	if (ran_a == 'w')
		exp_a = rand_w;
	if (ran_a == 'x')
		exp_a = rand_x;
	if (ran_a == 'y')
		exp_a = rand_y;
	if (ran_a == 'z')
		exp_a = rand_z;
	if (ran_b == 'e')
		exp_b = rand_e;
	if (ran_b == 'f')
		exp_b = rand_f;
	if (ran_b == 'g')
		exp_b = rand_g;
	if (ran_b == 'h')
		exp_b = rand_h;
	if (ran_b == 'i')
		exp_b = rand_i;
	if (ran_b == 'j')
		exp_b = rand_j;
	if (ran_b == 'k')
		exp_b = rand_k;
	if (ran_b == 'l')
		exp_b = rand_l;
	if (ran_b == 'm')
		exp_b = rand_m;
	if (ran_b == 'n')
		exp_b = rand_n;
	if (ran_b == 'o')
		exp_b = rand_o;
	if (ran_b == 'p')
		exp_b = rand_p;
	if (ran_b == 'q')
		exp_b = rand_q;
	if (ran_b == 'r')
		exp_b = rand_r;
	if (ran_b == 's')
		exp_b = rand_s;
	if (ran_b == 't')
		exp_b = rand_t;
	if (ran_b == 'u')
		exp_b = rand_u;
	if (ran_b == 'v')
		exp_b = rand_v;
	if (ran_b == 'w')
		exp_b = rand_w;
	if (ran_b == 'x')
		exp_b = rand_x;
	if (ran_b == 'y')
		exp_b = rand_y;
	if (ran_b == 'z')
		exp_b = rand_z;
	if (ran_c == 'e')
		exp_c = rand_e;
	if (ran_c == 'f')
		exp_c = rand_f;
	if (ran_c == 'g')
		exp_c = rand_g;
	if (ran_c == 'h')
		exp_c = rand_h;
	if (ran_c == 'i')
		exp_c = rand_i;
	if (ran_c == 'j')
		exp_c = rand_p;
	if (ran_c == 'k')
		exp_c = rand_k;
	if (ran_c == 'l')
		exp_c = rand_l;
	if (ran_c == 'm')
		exp_c = rand_m;
	if (ran_c == 'n')
		exp_c = rand_n;
	if (ran_c == 'o')
		exp_c = rand_o;
	if (ran_c == 'p')
		exp_c = rand_p;
	if (ran_c == 'q')
		exp_c = rand_q;
	if (ran_c == 'r')
		exp_c = rand_r;
	if (ran_c == 's')
		exp_c = rand_s;
	if (ran_c == 't')
		exp_c = rand_t;
	if (ran_c == 'u')
		exp_c = rand_u;
	if (ran_c == 'v')
		exp_c = rand_v;
	if (ran_c == 'w')
		exp_c = rand_w;
	if (ran_c == 'x')
		exp_c = rand_x;
	if (ran_c == 'y')
		exp_c = rand_y;
	if (ran_c == 'z')
		exp_c = rand_z;
	if (ran_d == 'e')
		exp_d = rand_e;
	if (ran_d == 'f')
		exp_d = rand_f;
	if (ran_d == 'g')
		exp_d = rand_g;
	if (ran_d == 'h')
		exp_d = rand_h;
	if (ran_d == 'i')
		exp_d = rand_i;
	if (ran_d == 'j')
		exp_d = rand_j;
	if (ran_d == 'k')
		exp_d = rand_k;
	if (ran_d == 'l')
		exp_d = rand_l;
	if (ran_d == 'm')
		exp_d = rand_m;
	if (ran_d == 'n')
		exp_d = rand_n;
	if (ran_d == 'o')
		exp_d = rand_o;
	if (ran_d == 'p')
		exp_d = rand_p;
	if (ran_d == 'q')
		exp_d = rand_q;
	if (ran_d == 'r')
		exp_d = rand_r;
	if (ran_d == 's')
		exp_d = rand_s;
	if (ran_d == 't')
		exp_d = rand_t;
	if (ran_d == 'u')
		exp_d = rand_u;
	if (ran_d == 'v')
		exp_d = rand_v;
	if (ran_d == 'w')
		exp_d = rand_w;
	if (ran_d == 'x')
		exp_d = rand_x;
	if (ran_d == 'y')
		exp_d = rand_y;
	if (ran_d == 'z')
		exp_d = rand_z;
	if (ran_e == 'a')
		exp_e = rand_a;
	if (ran_e == 'b')
		exp_e = rand_b;
	if (ran_e == 'c')
		exp_e = rand_c;
	if (ran_e == 'd')
		exp_e = rand_d;
	if (ran_e == 'i')
		exp_e = rand_i;
	if (ran_e == 'j')
		exp_e = rand_j;
	if (ran_e == 'k')
		exp_e = rand_k;
	if (ran_e == 'l')
		exp_e = rand_l;
	if (ran_e == 'm')
		exp_e = rand_m;
	if (ran_e == 'n')
		exp_e = rand_n;
	if (ran_e == 'o')
		exp_e = rand_o;
	if (ran_e == 'p')
		exp_e = rand_p;
	if (ran_e == 'q')
		exp_e = rand_q;
	if (ran_e == 'r')
		exp_e = rand_r;
	if (ran_e == 's')
		exp_e = rand_s;
	if (ran_e == 't')
		exp_e = rand_t;
	if (ran_e == 'u')
		exp_e = rand_u;
	if (ran_e == 'v')
		exp_e = rand_v;
	if (ran_e == 'w')
		exp_e = rand_w;
	if (ran_e == 'x')
		exp_e = rand_x;
	if (ran_e == 'y')
		exp_e = rand_y;
	if (ran_e == 'z')
		exp_e = rand_z;
	if (ran_f == 'a')
		exp_f = rand_a;
	if (ran_f == 'b')
		exp_f = rand_b;
	if (ran_f == 'c')
		exp_f = rand_c;
	if (ran_f == 'd')
		exp_f = rand_d;
	if (ran_f == 'i')
		exp_f = rand_i;
	if (ran_f == 'j')
		exp_f = rand_j;
	if (ran_f == 'k')
		exp_f = rand_k;
	if (ran_f == 'l')
		exp_f = rand_l;
	if (ran_f == 'm')
		exp_f = rand_m;
	if (ran_f == 'n')
		exp_f = rand_n;
	if (ran_f == 'o')
		exp_f = rand_o;
	if (ran_f == 'p')
		exp_f = rand_p;
	if (ran_f == 'q')
		exp_f = rand_q;
	if (ran_f == 'r')
		exp_f = rand_r;
	if (ran_f == 's')
		exp_f = rand_s;
	if (ran_f == 't')
		exp_f = rand_t;
	if (ran_f == 'u')
		exp_f = rand_u;
	if (ran_f == 'v')
		exp_f = rand_v;
	if (ran_f == 'w')
		exp_f = rand_w;
	if (ran_f == 'x')
		exp_f = rand_x;
	if (ran_f == 'y')
		exp_f = rand_y;
	if (ran_f == 'z')
		exp_f = rand_z;
	if (ran_g == 'a')
		exp_g = rand_a;
	if (ran_g == 'b')
		exp_g = rand_b;
	if (ran_g == 'c')
		exp_g = rand_c;
	if (ran_g == 'd')
		exp_g = rand_d;
	if (ran_g == 'i')
		exp_g = rand_i;
	if (ran_g == 'j')
		exp_g = rand_j;
	if (ran_g == 'k')
		exp_g = rand_k;
	if (ran_g == 'l')
		exp_g = rand_l;
	if (ran_g == 'm')
		exp_g = rand_m;
	if (ran_g == 'n')
		exp_g = rand_n;
	if (ran_g == 'o')
		exp_g = rand_o;
	if (ran_g == 'p')
		exp_g = rand_p;
	if (ran_g == 'q')
		exp_g = rand_q;
	if (ran_g == 'r')
		exp_g = rand_r;
	if (ran_g == 's')
		exp_g = rand_s;
	if (ran_g == 't')
		exp_g = rand_t;
	if (ran_g == 'u')
		exp_g = rand_u;
	if (ran_g == 'v')
		exp_g = rand_v;
	if (ran_g == 'w')
		exp_g = rand_w;
	if (ran_g == 'x')
		exp_g = rand_x;
	if (ran_g == 'y')
		exp_g = rand_y;
	if (ran_g == 'z')
		exp_g = rand_z;
	if (ran_h == 'a')
		exp_h = rand_a;
	if (ran_h == 'b')
		exp_h = rand_b;
	if (ran_h == 'c')
		exp_h = rand_c;
	if (ran_h == 'd')
		exp_h = rand_h;
	if (ran_h == 'i')
		exp_h = rand_i;
	if (ran_h == 'j')
		exp_h = rand_j;
	if (ran_h == 'k')
		exp_h = rand_k;
	if (ran_h == 'l')
		exp_h = rand_l;
	if (ran_h == 'm')
		exp_h = rand_m;
	if (ran_h == 'n')
		exp_h = rand_n;
	if (ran_h == 'o')
		exp_h = rand_o;
	if (ran_h == 'p')
		exp_h = rand_p;
	if (ran_h == 'q')
		exp_h = rand_q;
	if (ran_h == 'r')
		exp_h = rand_r;
	if (ran_h == 's')
		exp_h = rand_s;
	if (ran_h == 't')
		exp_h = rand_t;
	if (ran_h == 'u')
		exp_h = rand_u;
	if (ran_h == 'v')
		exp_h = rand_v;
	if (ran_h == 'w')
		exp_h = rand_w;
	if (ran_h == 'x')
		exp_h = rand_x;
	if (ran_h == 'y')
		exp_h = rand_y;
	if (ran_h == 'z')
		exp_h = rand_z;
	if (ran_i == 'a')
		exp_i = rand_a;
	if (ran_i == 'b')
		exp_i = rand_b;
	if (ran_i == 'c')
		exp_i = rand_c;
	if (ran_i == 'd')
		exp_i = rand_d;
	if (ran_i == 'e')
		exp_i = rand_e;
	if (ran_i == 'f')
		exp_i = rand_f;
	if (ran_i == 'g')
		exp_i = rand_g;
	if (ran_i == 'h')
		exp_i = rand_h;
	if (ran_i == 'm')
		exp_i = rand_m;
	if (ran_i == 'n')
		exp_i = rand_n;
	if (ran_i == 'o')
		exp_i = rand_o;
	if (ran_i == 'p')
		exp_i = rand_p;
	if (ran_i == 'q')
		exp_i = rand_q;
	if (ran_i == 'r')
		exp_i = rand_r;
	if (ran_i == 's')
		exp_i = rand_s;
	if (ran_i == 't')
		exp_i = rand_t;
	if (ran_i == 'u')
		exp_i = rand_u;
	if (ran_i == 'v')
		exp_i = rand_v;
	if (ran_i == 'w')
		exp_i = rand_w;
	if (ran_i == 'x')
		exp_i = rand_x;
	if (ran_i == 'y')
		exp_i = rand_y;
	if (ran_i == 'z')
		exp_i = rand_z;
	if (ran_j == 'a')
		exp_j = rand_a;
	if (ran_j == 'b')
		exp_j = rand_b;
	if (ran_j == 'c')
		exp_j = rand_c;
	if (ran_j == 'd')
		exp_j = rand_d;
	if (ran_j == 'e')
		exp_j = rand_e;
	if (ran_j == 'f')
		exp_j = rand_f;
	if (ran_j == 'g')
		exp_j = rand_g;
	if (ran_j == 'h')
		exp_j = rand_h;
	if (ran_j == 'm')
		exp_j = rand_m;
	if (ran_j == 'n')
		exp_j = rand_n;
	if (ran_j == 'o')
		exp_j = rand_o;
	if (ran_j == 'p')
		exp_j = rand_p;
	if (ran_j == 'q')
		exp_j = rand_q;
	if (ran_j == 'r')
		exp_j = rand_r;
	if (ran_j == 's')
		exp_j = rand_s;
	if (ran_j == 't')
		exp_j = rand_t;
	if (ran_j == 'u')
		exp_j = rand_u;
	if (ran_j == 'v')
		exp_j = rand_v;
	if (ran_j == 'w')
		exp_j = rand_w;
	if (ran_j == 'x')
		exp_j = rand_x;
	if (ran_j == 'y')
		exp_j = rand_y;
	if (ran_j == 'z')
		exp_j = rand_z;
	if (ran_k == 'a')
		exp_k = rand_a;
	if (ran_k == 'b')
		exp_k = rand_b;
	if (ran_k == 'c')
		exp_k = rand_c;
	if (ran_k == 'd')
		exp_k = rand_d;
	if (ran_k == 'e')
		exp_k = rand_e;
	if (ran_k == 'f')
		exp_k = rand_f;
	if (ran_k == 'g')
		exp_k = rand_g;
	if (ran_k == 'h')
		exp_k = rand_h;
	if (ran_k == 'm')
		exp_k = rand_m;
	if (ran_k == 'n')
		exp_k = rand_n;
	if (ran_k == 'o')
		exp_k = rand_o;
	if (ran_k == 'p')
		exp_k = rand_p;
	if (ran_k == 'q')
		exp_k = rand_q;
	if (ran_k == 'r')
		exp_k = rand_r;
	if (ran_k == 's')
		exp_k = rand_s;
	if (ran_k == 't')
		exp_k = rand_t;
	if (ran_k == 'u')
		exp_k = rand_u;
	if (ran_k == 'v')
		exp_k = rand_v;
	if (ran_k == 'w')
		exp_k = rand_w;
	if (ran_k == 'x')
		exp_k = rand_x;
	if (ran_k == 'y')
		exp_k = rand_y;
	if (ran_k == 'z')
		exp_k = rand_z;
	if (ran_l == 'a')
		exp_l = rand_a;
	if (ran_l == 'b')
		exp_l = rand_b;
	if (ran_l == 'c')
		exp_l = rand_c;
	if (ran_l == 'd')
		exp_l = rand_d;
	if (ran_l == 'e')
		exp_l = rand_e;
	if (ran_l == 'f')
		exp_l = rand_f;
	if (ran_l == 'g')
		exp_l = rand_g;
	if (ran_l == 'h')
		exp_l = rand_h;
	if (ran_l == 'm')
		exp_l = rand_m;
	if (ran_l == 'n')
		exp_l = rand_n;
	if (ran_l == 'o')
		exp_l = rand_o;
	if (ran_l == 'p')
		exp_l = rand_p;
	if (ran_l == 'q')
		exp_l = rand_q;
	if (ran_l == 'r')
		exp_l = rand_r;
	if (ran_l == 's')
		exp_l = rand_s;
	if (ran_l == 't')
		exp_l = rand_t;
	if (ran_l == 'u')
		exp_l = rand_u;
	if (ran_l == 'v')
		exp_l = rand_v;
	if (ran_l == 'w')
		exp_l = rand_w;
	if (ran_l == 'x')
		exp_l = rand_x;
	if (ran_l == 'y')
		exp_l = rand_y;
	if (ran_l == 'z')
		exp_l = rand_z;
	if (ran_m == 'a')
		exp_m = rand_a;
	if (ran_m == 'b')
		exp_m = rand_b;
	if (ran_m == 'c')
		exp_m = rand_c;
	if (ran_m == 'd')
		exp_m = rand_d;
	if (ran_m == 'e')
		exp_m = rand_e;
	if (ran_m == 'f')
		exp_m = rand_f;
	if (ran_m == 'g')
		exp_i = rand_g;
	if (ran_m == 'h')
		exp_m = rand_h;
	if (ran_m == 'i')
		exp_m = rand_i;
	if (ran_m == 'j')
		exp_m = rand_j;
	if (ran_m == 'k')
		exp_m = rand_k;
	if (ran_m == 'l')
		exp_m = rand_l;
	if (ran_m == 'q')
		exp_m = rand_q;
	if (ran_m == 'r')
		exp_m = rand_r;
	if (ran_m == 's')
		exp_m = rand_s;
	if (ran_m == 't')
		exp_m = rand_t;
	if (ran_m == 'u')
		exp_m = rand_u;
	if (ran_m == 'v')
		exp_m = rand_v;
	if (ran_m == 'w')
		exp_m = rand_w;
	if (ran_m == 'x')
		exp_m = rand_x;
	if (ran_m == 'y')
		exp_m = rand_y;
	if (ran_m == 'z')
		exp_m = rand_z;
	if (ran_n == 'a')
		exp_n = rand_a;
	if (ran_n == 'b')
		exp_n = rand_b;
	if (ran_n == 'c')
		exp_n = rand_c;
	if (ran_n == 'd')
		exp_n = rand_d;
	if (ran_n == 'e')
		exp_n = rand_e;
	if (ran_n == 'f')
		exp_n = rand_f;
	if (ran_n == 'g')
		exp_n = rand_g;
	if (ran_n == 'h')
		exp_n = rand_h;
	if (ran_n == 'i')
		exp_n = rand_i;
	if (ran_n == 'j')
		exp_n = rand_j;
	if (ran_n == 'k')
		exp_n = rand_k;
	if (ran_n == 'l')
		exp_n = rand_l;
	if (ran_n == 'q')
		exp_n = rand_q;
	if (ran_n == 'r')
		exp_n = rand_r;
	if (ran_n == 's')
		exp_n = rand_s;
	if (ran_n == 't')
		exp_n = rand_t;
	if (ran_n == 'u')
		exp_n = rand_u;
	if (ran_n == 'v')
		exp_n = rand_v;
	if (ran_n == 'w')
		exp_n = rand_w;
	if (ran_n == 'x')
		exp_n = rand_x;
	if (ran_n == 'y')
		exp_n = rand_y;
	if (ran_n == 'z')
		exp_n = rand_z;
	if (ran_o == 'a')
		exp_o = rand_a;
	if (ran_o == 'b')
		exp_o = rand_b;
	if (ran_o == 'c')
		exp_o = rand_c;
	if (ran_o == 'd')
		exp_o = rand_d;
	if (ran_o == 'e')
		exp_o = rand_e;
	if (ran_o == 'f')
		exp_o = rand_f;
	if (ran_o == 'g')
		exp_o = rand_g;
	if (ran_o == 'h')
		exp_o = rand_h;
	if (ran_o == 'i')
		exp_o = rand_i;
	if (ran_o == 'j')
		exp_o = rand_j;
	if (ran_o == 'k')
		exp_o = rand_k;
	if (ran_o == 'l')
		exp_o = rand_l;
	if (ran_o == 'q')
		exp_o = rand_q;
	if (ran_o == 'r')
		exp_o = rand_r;
	if (ran_o == 's')
		exp_o = rand_s;
	if (ran_o == 't')
		exp_o = rand_t;
	if (ran_o == 'u')
		exp_o = rand_u;
	if (ran_o == 'v')
		exp_o = rand_v;
	if (ran_o == 'w')
		exp_o = rand_w;
	if (ran_o == 'x')
		exp_o = rand_x;
	if (ran_o == 'y')
		exp_o = rand_y;
	if (ran_o == 'z')
		exp_o = rand_z;
	if (ran_p == 'a')
		exp_p = rand_a;
	if (ran_p == 'b')
		exp_p = rand_b;
	if (ran_p == 'c')
		exp_p = rand_c;
	if (ran_p == 'd')
		exp_p = rand_d;
	if (ran_p == 'e')
		exp_p = rand_e;
	if (ran_p == 'f')
		exp_p = rand_f;
	if (ran_p == 'g')
		exp_p = rand_g;
	if (ran_p == 'h')
		exp_p = rand_h;
	if (ran_p == 'i')
		exp_p = rand_i;
	if (ran_p == 'j')
		exp_p = rand_j;
	if (ran_p == 'k')
		exp_p = rand_k;
	if (ran_p == 'l')
		exp_p = rand_l;
	if (ran_p == 'q')
		exp_p = rand_q;
	if (ran_p == 'r')
		exp_p = rand_r;
	if (ran_p == 's')
		exp_p = rand_s;
	if (ran_p == 't')
		exp_p = rand_t;
	if (ran_p == 'u')
		exp_p = rand_u;
	if (ran_p == 'v')
		exp_p = rand_v;
	if (ran_p == 'w')
		exp_p = rand_w;
	if (ran_p == 'x')
		exp_p = rand_x;
	if (ran_p == 'y')
		exp_p = rand_y;
	if (ran_p == 'z')
		exp_p = rand_z;
	picture_i = except_ijkl[rand() % 22];
	picture_j = except_ijkl[rand() % 22];
	picture_k = except_ijkl[rand() % 22];
	picture_l = except_ijkl[rand() % 22];
	picture_m = except_mnop[rand() % 22];
	picture_n = except_mnop[rand() % 22];
	picture_o = except_mnop[rand() % 22];
	picture_p = except_mnop[rand() % 22];
	picture_q = except_qrst[rand() % 22];
	picture_r = except_qrst[rand() % 22];
	picture_s = except_qrst[rand() % 22];
	picture_t = except_qrst[rand() % 22];
	picture_u = except_uvwx[rand() % 22];
	picture_v = except_uvwx[rand() % 22];
	picture_w = except_uvwx[rand() % 22];
	picture_x = except_uvwx[rand() % 22];
	printf("\n\n%s\n%s", picture_i, exp_a);
	iInitialize(1200, 700, "Teach yourself ABC");
	return 0;
}