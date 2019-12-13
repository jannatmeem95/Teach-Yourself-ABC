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



void iDraw(void)
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









void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
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
	
	iInitialize(1200, 700, "Teach yourself ABC");
	return 0;
}