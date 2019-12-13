# include "iGraphics.h"
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

////// added
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

char **numpic[10] = { mn, tw, th, fo, fi, si, se, ei, ni, te };

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

char **numsound[10] = { mnsound, twsound, thsound, fosound, fisound, sisound, sesound, eisound, nisound, tesound };


///// added


int AtoPSelect ,AtoPPosi  ;
char *number[10]={"num1.bmp","num2.bmp","num3.bmp","num4.bmp","num5.bmp","num6.bmp","num7.bmp","num8.bmp","num9.bmp","num10.bmp"};
char *num[30] = { "11.bmp", "12.bmp", "13.bmp", "21.bmp", "22.bmp", "23.bmp", "31.bmp", "32.bmp", "33.bmp", "41.bmp", "42.bmp", "43.bmp", "51.bmp", "52.bmp", "53.bmp", "61.bmp", "62.bmp", "63.bmp", "71.bmp", "72.bmp", "73.bmp", "81.bmp", "82.bmp", "83.bmp", "91.bmp", "92.bmp", "93.bmp", "101.bmp", "102.bmp", "103.bmp" };
char *num_pic[10]={"1.bmp","2.bmp","3.bmp","4.bmp","5.bmp","6.bmp","7.bmp","8.bmp","9.bmp","10.bmp"};


//char *numsound[30] = { "11.wav", "12.wav", "13.wav", "21.wav", "22.wav", "23.wav", "31.wav", "32.wav", "33.wav", "41.wav", "42.wav", "43.wav", "51.wav", "52.wav", "53.wav", "61.wav", "62.wav", "63.wav", "71.wav", "72.wav", "73.wav", "81.wav", "82.wav", "83.wav", "91.wav", "92.wav", "93.wav", "101.wav", "102.wav", "103.wav" };

//char *letter[26] = { "a.bmp", "b.bmp", "c.bmp", "d.bmp", "e.bmp", "f.bmp", "g.bmp", "h.bmp", "i.bmp", "j.bmp", "k.bmp", "l.bmp", "m.bmp", "n.bmp", "o.bmp", "p.bmp", "q.bmp", "r.bmp", "s.bmp", "t.bmp", "u.bmp", "v.bmp", "w.bmp", "x.bmp", "y.bmp", "z.bmp" };

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


char **alphapic[26] = { _a, _b, _c, _d, _e, _f, _g, _h, _i, _j, _k, _l, _m, _n, _o, _p, _q, _r, _s, _t, _u, _v, _w, _x, _y, _z };
int alphapiccount[26] = { 8, 11, 10, 9, 8, 10, 11, 8, 8, 8, 9, 10, 8, 8, 9, 10, 5, 11, 10, 10, 2, 3, 8, 2, 5, 4 };

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

char **alphasound[26] = { asound, bsound, csound, dsound, esound, fsound, gsound, hsound, isound, jsound, ksound, lsound, msound, nsound, osound, psound, qsound, rsound, ssound, tsound, usound, vsound, wsound, xsound, ysound, zsound };
int alphapicselect[26] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
int numpicselect[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };


char * alpha_sound[26][11]=
{
{ "apple.wav", "almond.wav", "ant.wav", "arm.wav", "arum.wav", "arrow.wav", "aligator.wav", "axe.wav" },
 { "ball.wav", "balloon.wav", "bamboo.wav", "banana.wav", "bee.wav", "bread.wav", "brush.wav", "bubbles.wav", "brownie.wav", "bucket.wav", "butterfly.wav" },
{ "carrot.wav", "cat.wav", "car.wav", "cow.wav", "cap.wav", "candy.wav", "camera.wav", "camellia.wav", "camel.wav", "candle.wav" },
{ "dahlia.wav", "daisy.wav", "dart.wav", "deer.wav", "diamond.wav", "dog.wav", "doll.wav", "dolphin.wav", "dove.wav" },
{ "earth.wav", "eagle.wav", "elephant.wav", "egg.wav", "eggplant.wav", "envelope.wav", "eye.wav", "elbow.wav" },
{ "flag.wav", "Flower.wav", "fish.wav", "frog.wav", "fox.wav", "fire.wav", "family.wav", "fan.wav", "feather.wav", "finger.wav" },
{ "gerbera.wav", "ginger.wav", "giraffe.wav", "goat.wav", "gem.wav", "glass.wav", "grape.wav", "gras.wav", "grasshopper.wav", "guava.wav", "guiter.wav" },
{ "horse.wav", "hen.wav", "honey.wav", "home.wav", "hook.wav", "horn.wav", "heart.wav", "hedgehog.wav" },
{ "icecream.wav", "ice.wav", "ink.wav", "igloo.wav", "inn.wav", "insect.wav", "iron.wav", "island.wav" },
{ "jasmin.wav", "jay.wav", "jackfruit.wav", "jacket.wav", "jaguar.wav", "jam.wav", "jug.wav", "jet.wav" },
{ "kangaroo.wav", "kettle.wav", "key.wav", "king.wav", "kite.wav", "kitten.wav", "kiwi.wav", "kiwifruit.wav", "koala.wav" },
{ "lemon.wav", "lion.wav", "leaf.wav", "lollypop.wav", "lotus.wav", "Lychee.wav", "lamb.wav", "lamp.wav", "lizard.wav", "loon.wav" },
{ "mango.wav", "macaw.wav", "maze.wav", "moon.wav", "mushroom.wav", "marshmallow.wav", "magpie.wav", "magnet.wav" },
{ "nuts.wav", "nylon.wav", "nose.wav", "nightingale.wav", "nutmeg.wav", "nail.wav", "neck.wav", "net.wav" },
{ "orange.wav", "onioin.wav", "oil.wav", "olive.wav", "orchid.wav", "octopus.wav", "okra.wav", "owl.wav", "oyster.wav" },
{ "pinapple.wav", "pencil.wav", "paint.wav", "papaya.wav", "pastry.wav", "peacock.wav", "pearl.wav", "pigeon.wav", "pumpkin.wav", "painting.wav" },
{ "queen.wav", "quail.wav", "quilt.wav", "quiver.wav", "quoit.wav" },
{ "rabit.wav", "radio.wav", "rat.wav", "rose.wav", "rack.wav", "racket.wav", "radish.wav", "rainbow.wav", "ring.wav", "rickshaw.wav", "rope.wav" },
{ "schooll.wav", "star.wav", "strawberry.wav", "starfruit.wav", "sweater.wav", "shark.wav", "shoe.wav", "sharpner.wav", "sky.wav", "snake.wav" },
{ "tea.wav", "tape.wav", "tart.wav", "teddy.wav", "telephnoe.wav", "television.wav", "temple.wav", "tiger.wav", "toffe.wav", "tomato.wav" },
{ "umbrella.wav", "universe.wav" },
{ "vegetables.wav", "violin.wav", "vine.wav" },
{ "watermelon.wav", "water.wav", "wool.wav", "wire.wav", "wolf.wav", "waffles.wav", "window.wav", "wood.wav" },
{ "xray.wav", "xylophnoe.wav" },
{ "yolk.wav", "yard.wav", "yacht.wav", "yew.wav", "yawl.wav" },
{ "zinnia.wav", "zebra.wav", "ZIPER.wav", "zoo.wav" }
};

char *bodysound[14] = { "arm1.wav", "ear1.wav", "eye1.wav", "nose1.wav", "lips.wav", "neck1.wav", "teeth1.wav", "tongue.wav", "hand1.wav", "leg.wav", "shoulder.wav", "knee.wav", "head.wav", "forehead.wav"};


int page_no = 1;
char anc = -1;
int bodyvariable = 0;
/// added
char *blue[3] = { "33.bmp", "blue.bmp", "owl.bmp" };
char *red[3] = { "apple.bmp", "tomato.bmp", "strawberry.bmp" };
char *green[3] = { "aligator.bmp", "okra.bmp", "vine.bmp" };
char *yellow[3] = { "banana.bmp", "starfruit.bmp", "telephone.bmp" };
char *pink[3] = { "51.bmp", "octopus.bmp", "pink.bmp" };
char *purple[3] = { "21.bmp", "purple.bmp", "purple1.bmp" };
char *orange[3] = { "carrot.bmp", "orange.bmp", "orange1.bmp" };
char *brown[3] = { "almond.bmp", "brown.bmp", "brownie.bmp" };
char *white[3] = { "teeth.bmp", "milk.bmp", "paper.bmp" };
char *black[3] = { "hair.bmp", "crow.bmp", "shirt.bmp" };
char **colorpic[10] = { blue, green, red, yellow, orange, pink, brown, purple, white, black };
int colorpicselect[10] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };

char *bluwav[3] = { "bluflow.wav", "blufish.wav", "bluowl.wav" };
char *redwav[3] = { "redapple.wav", "redtomato.wav", "redstraw.wav" };
char *greewav[3] = { "greealliga.wav", "greeokra.wav", "greeleaf.wav" };
char *yelwav[3] = { "yelbanana.wav", "yelstar.wav", "yeltele.wav" };
char *pinwav[3] = { "pinkfrock.wav", "pinkoctopus.wav", "pinkchoco.wav" };
char *purwav[3] = { "purpowl.wav", "purpbrinjal.wav", "purpangry.wav" };
char *orawav[3] = { "orancarrot.wav", "oranorange.wav", "oranball.wav" };
char *browwav[3] = { "browalmond.wav", "browbuterfly.wav", "browbrownie.wav" };
char *whiwav[3] = { "whiteeth.wav", "milk.wav", "paper.wav" };
char *blawav[3] = { "blackhair.wav", "crow.wav","shirt.wav" };

char **colorsound[10] = { bluwav, greewav, redwav, yelwav, orawav, pinwav, browwav, purwav, whiwav, blawav };

char *body[14] = { "arms.bmp", "ear.bmp", "eye.bmp", "nose.bmp", "lips.bmp", "neck.bmp", "teeth.bmp", "tongue.bmp", "hands.bmp", "leg.bmp", "shoulder.bmp", "knee.bmp", "head.bmp", "forehead.bmp" };

char *ashalphapic[27] = { "a1.bmp", "b1.bmp", "c1.bmp", "d1.bmp", "e1.bmp", "f1.bmp", "g1.bmp", "h1.bmp", "i1.bmp", "j1.bmp", "k1.bmp", "l1.bmp", "m1.bmp", "n1.bmp", "o1.bmp", "p1.bmp", "q1.bmp", "r1.bmp","s1.bmp","t1.bmp", "u1.bmp", "v1.bmp", "w1.bmp", "x1.bmp", "y1.bmp", "z1.bmp" };
char* ashnumpic[10] = { "num11.bmp", "num21.bmp", "num31.bmp", "num41.bmp", "num51.bmp", "num61.bmp", "num71.bmp", "num81.bmp", "num91.bmp", "num101.bmp" };


//added

/////////////

// a b c er choto choto pic
int pic_alphaCount[26]={8,10,8,10,8,9,    11,8,8,8,8,       9,9,7,10,9,     7,11,10,10,2,     3,8,2,5,4};
int ekka , dokka ,tekka ,chouka , pachka , chokka, shatka , atka ;
int  thikvul[4] ;
char *letter[26]={"alp_a.bmp","alp_b.bmp","alp_c.bmp","alp_d.bmp","alp_e.bmp","alp_f.bmp","alp_g.bmp","alp_h.bmp","alp_i.bmp","alp_j.bmp","alp_k.bmp","alp_l.bmp","alp_m.bmp","alp_n.bmp","alp_o.bmp","alp_p.bmp","alp_q.bmp","alp_r.bmp","alp_s.bmp","alp_t.bmp","alp_u.bmp","alp_v.bmp","alp_w.bmp","alp_x.bmp","alp_y.bmp","alp_z.bmp"};
char * pic_alpha[26][11]=
{
{"a_1.bmp", "a_2.bmp", "a_3.bmp", "a_4.bmp", "a_5.bmp", "a_6.bmp", "a_7.bmp", "a_8.bmp"},
{"b_1.bmp", "b_2.bmp", "b_3.bmp", "b_4.bmp" , "b_5.bmp", "b_6.bmp", "b_7.bmp", "b_8.bmp", "b_9.bmp", "b_10.bmp"},
{"c_1.bmp", "c_2.bmp", "c_3.bmp", "c_4.bmp", "c_5.bmp", "c_6.bmp", "c_7.bmp", "c_8.bmp"},
{"d_1.bmp", "d_2.bmp", "d_3.bmp", "d_4.bmp", "d_5.bmp", "d_6.bmp", "d_7.bmp", "d_8.bmp", "d_9.bmp", "d_10.bmp"},
{"e_1.bmp", "e_2.bmp", "e_3.bmp", "e_4.bmp", "e_5.bmp", "e_6.bmp", "e_7.bmp", "e_8.bmp"},
{"f_1.bmp", "f_2.bmp", "f_3.bmp", "f_4.bmp", "f_5.bmp", "f_6.bmp", "f_7.bmp", "f_8.bmp", "f_9.bmp"},
{"g_1.bmp", "g_2.bmp", "g_3.bmp", "g_4.bmp", "g_5.bmp", "g_6.bmp", "g_7.bmp", "g_8.bmp", "g_9.bmp", "g_10.bmp", "g_11.bmp"},
{"h_1.bmp", "h_2.bmp", "h_3.bmp", "h_4.bmp", "h_5.bmp", "h_6.bmp", "h_7.bmp", "h_8.bmp"},
{"i_1.bmp", "i_2.bmp", "i_3.bmp", "i_4.bmp", "i_5.bmp", "i_6.bmp", "i_7.bmp", "i_8.bmp"},
{"j_1.bmp", "j_2.bmp", "j_3.bmp", "j_4.bmp", "j_5.bmp", "j_6.bmp", "j_7.bmp", "j_8.bmp"},
{"k_1.bmp", "k_2.bmp", "k_3.bmp", "k_4.bmp", "k_5.bmp", "k_6.bmp", "k_7.bmp", "k_8.bmp"},
{"l_1.bmp", "l_2.bmp", "l_3.bmp", "l_4.bmp", "l_5.bmp", "l_6.bmp", "l_7.bmp", "l_8.bmp", "l_9.bmp"},
{"m_1.bmp", "m_2.bmp", "m_3.bmp", "m_4.bmp", "m_5.bmp", "m_6.bmp", "m_7.bmp", "m_8.bmp", "m_9.bmp"},
{"n_1.bmp", "n_2.bmp", "n_3.bmp", "n_4.bmp", "n_5.bmp", "n_6.bmp","n_7.bmp"},
{"o_1.bmp", "o_2.bmp", "o_3.bmp", "o_4.bmp", "o_5.bmp", "o_6.bmp", "o_7.bmp", "o_8.bmp", "o_9.bmp", "o_10.bmp"},
{"p_1.bmp", "p_2.bmp", "p_3.bmp", "p_4.bmp", "p_5.bmp", "p_6.bmp", "p_7.bmp", "p_8.bmp", "p_9.bmp"},
{"q_1.bmp", "q_2.bmp", "q_3.bmp", "q_4.bmp", "q_5.bmp", "q_6.bmp", "q_7.bmp"},
{"r_1.bmp", "r_2.bmp", "r_3.bmp", "r_4.bmp", "r_5.bmp", "r_6.bmp", "r_7.bmp", "r_8.bmp", "r_9.bmp", "r_10.bmp", "r_11.bmp"},
{"s_1.bmp", "s_2.bmp", "s_3.bmp", "s_4.bmp", "s_5.bmp", "s_6.bmp", "s_7.bmp", "s_8.bmp", "s_9.bmp", "s_10.bmp" },
{"t_1.bmp", "t_2.bmp", "t_3.bmp", "t_4.bmp", "t_5.bmp", "t_6.bmp", "t_7.bmp", "t_8.bmp", "t_9.bmp", "t_10.bmp"},
{"u_1.bmp", "u_2.bmp"},
{"v_1.bmp", "v_2.bmp", "v_3.bmp"},
{"w_1.bmp", "w_2.bmp", "w_3.bmp", "w_4.bmp", "w_5.bmp", "w_6.bmp", "w_7.bmp", "w_8.bmp"},
{"x_1.bmp", "x_2.bmp"},
{"y_1.bmp", "y_2.bmp", "y_3.bmp", "y_4.bmp", "y_5.bmp"},
{"z_1.bmp", "z_2.bmp", "z_3.bmp", "z_4.bmp"} };


char *letter_sound[26]={"a.wav","b.wav","c.wav","d.wav","e.wav","f.wav","g.wav","h.wav","i.wav","j.wav","k.wav","l.wav","m.wav","n.wav","o.wav","p.wav","q.wav","r.wav","s.wav","t.wav","u.wav","v.wav","w.wav","x.wav","y.wav","z.wav"};

char * color[10] = { "blu_main.bmp", "red_main.bmp", "gree_main.bmp", "yel_main.bmp", "pin_main.bmp", "pur_main.bmp", "brow_main.bmp", "whi_main.bmp", "bla_main.bmp" };
char *quiz_sound[]={  "bluquiz.wav", "redquiz.wav",  "greenquiz.wav",  "yellowquiz.wav","pinkquiz.wav","purplequiz.wav","brownquiz.wav","whitequiz.wav","blackquiz.wav"};
char * pic_color[9][3] =
{
	{ "gr1.bmp", "blue1.bmp", "owl1.bmp" },
	{ "apple1.bmp", "tomato1.bmp", "strawberry1.bmp" },
	{ "aligator1.bmp", "okra1.bmp", "vine1.bmp" },
	{ "banana1.bmp", "starfruit1.bmp", "telephnoe1.bmp" },
	{ "511.bmp", "octopus1.bmp", "pink1.bmp" },
	{ "211.bmp", "purple2.bmp", "purple11.bmp" },
	{ "almond1.bmp", "brown1.bmp", "brownie1.bmp" },
	{ "paper1.bmp", "teeth1.bmp", "milk1.bmp" },
	{ "shirt1.bmp", "crow1.bmp", "kitty1.bmp" }
};



void alphaprint(char c)
{
	if (c >= 'a' && c <= 'z'){
		iShowBMP(366, 16, "pink-2.bmp");
		iShowBMP(218, 16, "pink-1.bmp");
		if (*(alphapicselect + c - 'a') >= 0 && *(alphapicselect + c - 'a') < *(alphapiccount + c - 'a')) iShowBMP(100, 100, *(*(alphapic + c - 'a') + *(alphapicselect + c - 'a')));
		iShowBMP(792 + ((c - 'a') % 4) * 80, 601 - 100 * ((c - 'a') / 4), ashalphapic[c - 'a']);
		//printf("%d", *(alphapicselect + c - 'a'));
	}
}


void numprint(char n)
{
	if (n >= '0' && n <= '9') {
		iShowBMP(366, 16, "pink-2.bmp");
		iShowBMP(218, 16, "pink-1.bmp");
		if (*(numpicselect + n - '0') >= 0 && *(numpicselect + n - '0') < 3) iShowBMP(100, 100, *(*(numpic + n - '0') + *(numpicselect + n - '0')));
		iShowBMP(792 + ((n - '0') % 4) * 80, 601 - 100 * ((n - '0') / 4), ashnumpic[n - '0']);
	}
}
//page_no: mainmenu=1, learn=2, alphabet=3,number=4,color=5,human body=6,quiz=7,alphaquiz=8,alpha2pic=9,pic2alpha=10,numquiz=11;num2pic=12,pic2num=13,color2pic=14,pic2color=15

void colorprint(int n)
{
	if (n >= 0 && n <= 9) {
		iShowBMP(366, 16, "pink-2.bmp");
		iShowBMP(218, 16, "pink-1.bmp");
		if (*(colorpicselect + n) >= 0 && *(colorpicselect + n) < 3) iShowBMP(100, 100, *(*(colorpic + n) + *(colorpicselect + n)));
		//iShowBMP(792 + ((n) % 4) * 80, 601 - 100 * ((n ) / 4), "ashcolor.bmp");
	}
}


void page_no_9_parameters()   ///// alpha to pic
{
	
	AtoPSelect=rand() %26 ;
	
	PlaySound( letter_sound[AtoPSelect],NULL ,SND_FILENAME | SND_ASYNC);
	AtoPPosi = rand() % 4 ;
	ekka = (AtoPSelect + rand()%25+1)%26 ;
	dokka = (AtoPSelect + rand()%25+1)%26 ;
	tekka =(AtoPSelect + rand()%25+1)%26 ;
	
	chouka = rand() %pic_alphaCount[AtoPSelect] ;

	pachka = rand() %pic_alphaCount[ekka];
	chokka = rand() % pic_alphaCount[dokka] ;
	shatka = rand() %pic_alphaCount[tekka];
	printf("\n%s\n %s %s %s %s\n",letter[AtoPSelect] ,pic_alpha[AtoPSelect][ chouka ] ,pic_alpha[ ekka][pachka],pic_alpha[dokka][chokka],pic_alpha[tekka][shatka]);
	printf("\nletter[%d] ,pic_alpha[%d][%d] ,pic_alpha[%d][%d],pic_alpha[%d][%d],pic_alpha[%d][%d]",AtoPSelect,AtoPSelect, chouka, ekka,pachka,dokka,chokka,tekka,shatka );
}

void page_no_9()
{
		iSetColor(0,0,255);
		iFilledRectangle(0,0,1200,700);
		iShowBMP( 400 ,450 , letter[AtoPSelect]) ;
		iShowBMP(100 + ((AtoPPosi)%4)*200,  200 , pic_alpha[AtoPSelect][ chouka ] ) ;
		if(thikvul[0]==1) iShowBMP(100 + ((AtoPPosi)%4)*200,  200 , "right.bmp" ) ;
		iShowBMP(100+ ((AtoPPosi+1)%4)*200 ,200 ,pic_alpha[ ekka][pachka] ) ;
		if(thikvul[1]==1) iShowBMP(100+ ((AtoPPosi+1)%4)*200 ,200 ,"cross.bmp");
		iShowBMP(100+ ((AtoPPosi+2)%4)*200 ,200 , pic_alpha[dokka][chokka]) ;
		if(thikvul[2]==1) iShowBMP(100+ ((AtoPPosi+2)%4)*200 ,200 ,"cross.bmp" );
		iShowBMP(100+ ((AtoPPosi+3)%4)*200 ,200 , pic_alpha[tekka][shatka]) ;
		if(thikvul[3]==1) iShowBMP(100+ ((AtoPPosi+3)%4)*200 ,200 , "cross.bmp") ;
		iShowBMP(1000,50,"red.bmp");
		iShowBMP(50,600,"back1.bmp");

}
void page_no_10_parameters()   /////  pic to alpha
{
	AtoPSelect=rand() %26 ;
	
	//PlaySound( alpha_sound[AtoPSelect][ekka],NULL ,SND_FILENAME | SND_ASYNC);
	AtoPPosi = rand() % 4 ;
	ekka = rand() %pic_alphaCount[AtoPSelect] ;


	
	dokka = (AtoPSelect + rand()%25+1)%26 ;
	tekka =(AtoPSelect + rand()%25+1)%26 ;
	chouka = (AtoPSelect + rand()%25+1)%26 ;

	printf("\n%s\n %s %s %s %s\n",pic_alpha[AtoPSelect][ekka] ,letter[AtoPSelect] ,letter[dokka] ,letter[tekka],letter[chouka]);
	printf("\npic_alpha[%d][%d] ,letter[%d] ,letter[%d] ,letter[%d],letter[%d]",AtoPSelect,ekka,AtoPSelect,dokka,tekka,chouka);

}

void page_no_10() 
{
		iSetColor(0,0,255);
		iFilledRectangle(0,0,1200,700);
		iShowBMP( 400 ,450 , pic_alpha[AtoPSelect][ekka]) ;
		iShowBMP(100 + ((AtoPPosi)%4)*200,  200 , letter[AtoPSelect] ) ;
		if(thikvul[0]==1) iShowBMP(100 + ((AtoPPosi)%4)*200,  200 , "right.bmp" ) ;
		iShowBMP(100+ ((AtoPPosi+1)%4)*200 ,200 ,letter[dokka] ) ;
		if(thikvul[1]==1) iShowBMP(100+ ((AtoPPosi+1)%4)*200 ,200 ,"cross.bmp");
		iShowBMP(100+ ((AtoPPosi+2)%4)*200 ,200 , letter[tekka]) ;
		if(thikvul[2]==1) iShowBMP(100+ ((AtoPPosi+2)%4)*200 ,200 ,"cross.bmp" );
		iShowBMP(100+ ((AtoPPosi+3)%4)*200 ,200 , letter[chouka]) ;
		if(thikvul[3]==1) iShowBMP(100+ ((AtoPPosi+3)%4)*200 ,200 , "cross.bmp") ;
		iShowBMP(1000,50,"red.bmp");
		iShowBMP(50,600,"back1.bmp");


}

void page_no_12_13_parameters()   ///// alpha to pic
{
	
	AtoPSelect=rand() %9 ;
	
	//PlaySound( letter_sound[AtoPSelect],NULL ,SND_FILENAME | SND_ASYNC);
	AtoPPosi = rand() % 4 ;
	/*ekka = (AtoPSelect + rand()%25+1)%26 ;
	dokka = (AtoPSelect + rand()%25+1)%26 ;
	tekka =(AtoPSelect + rand()%25+1)%26 ;*/

	ekka = (AtoPSelect + rand()%8+1 )%9 ;
	dokka = (AtoPSelect + rand()%8+1 )%9 ;
	tekka =(AtoPSelect + rand()%8+1 )%9;
	chouka = rand() %3 ;
	pachka = rand() %3;
	chokka = rand() % 3;
	shatka = rand() %3;
	if(page_no==12) printf("%s\n %s %s %s %s\n",number[AtoPSelect] ,num_pic[AtoPSelect] ,num_pic[ ekka],num_pic[dokka],num_pic[tekka]);
	if(page_no==13) printf("%s\n %s %s %s %s\n",num_pic[AtoPSelect] ,number[AtoPSelect] ,number[ ekka],number[dokka],number[tekka]);

}

 

 void page_no_12()  //  num to pic
 {
		iSetColor(0,0,255);
		iFilledRectangle(0,0,1200,700);
		iShowBMP( 400 ,450 , number[AtoPSelect]) ;
		iShowBMP(100 + ((AtoPPosi)%4)*200,  200 , num_pic[AtoPSelect] ) ;
		if(thikvul[0]==1) iShowBMP(100 + ((AtoPPosi)%4)*200,  200 , "right.bmp" ) ;
		iShowBMP(100+ ((AtoPPosi+1)%4)*200 ,200 ,num_pic[ ekka] ) ;
		if(thikvul[1]==1) iShowBMP(100+ ((AtoPPosi+1)%4)*200 ,200 ,"cross.bmp");
		iShowBMP(100+ ((AtoPPosi+2)%4)*200 ,200 , num_pic[dokka]) ;
		if(thikvul[2]==1) iShowBMP(100+ ((AtoPPosi+2)%4)*200 ,200 ,"cross.bmp" );
		iShowBMP(100+ ((AtoPPosi+3)%4)*200 ,200 , num_pic[tekka]) ;
		if(thikvul[3]==1) iShowBMP(100+ ((AtoPPosi+3)%4)*200 ,200 , "cross.bmp") ;
		iShowBMP(1000,50,"red.bmp");
		iShowBMP(50,600,"back1.bmp");
 }


 void page_no_13()
 {
	 iSetColor(0,0,255);
		iFilledRectangle(0,0,1200,700);
		iShowBMP( 400 ,450 , num_pic[AtoPSelect]) ;
		iShowBMP(100 + ((AtoPPosi)%4)*200,  200 , number[AtoPSelect] ) ;
		if(thikvul[0]==1) iShowBMP(100 + ((AtoPPosi)%4)*200,  200 , "right.bmp" ) ;
		iShowBMP(100+ ((AtoPPosi+1)%4)*200 ,200 ,number[ ekka] ) ;
		if(thikvul[1]==1) iShowBMP(100+ ((AtoPPosi+1)%4)*200 ,200 ,"cross.bmp");
		iShowBMP(100+ ((AtoPPosi+2)%4)*200 ,200 , number[dokka]) ;
		if(thikvul[2]==1) iShowBMP(100+ ((AtoPPosi+2)%4)*200 ,200 ,"cross.bmp" );
		iShowBMP(100+ ((AtoPPosi+3)%4)*200 ,200 , number[tekka]) ;
		if(thikvul[3]==1) iShowBMP(100+ ((AtoPPosi+3)%4)*200 ,200 , "cross.bmp") ;
		iShowBMP(1000,50,"red.bmp");
		iShowBMP(50,600,"back1.bmp");

 }

void page_no_15_parameters()   ///// alpha to pic
{
	AtoPSelect=rand() %9 ;
	
	PlaySound( quiz_sound[AtoPSelect],NULL ,SND_FILENAME | SND_ASYNC);
	AtoPPosi = rand() % 4 ;
	ekka = (AtoPSelect + rand()%8+1)%9 ;
	dokka = (AtoPSelect + rand()%8+1)%9 ;
	tekka =(AtoPSelect + rand()%8+1)%9 ;
	
	chouka = rand() %3 ;
	
	pachka = rand() %3;
	chokka = rand() % 3 ;
	shatka = rand() %3;
	printf("\n%s\n %s %s %s %s\n",color[AtoPSelect] ,pic_color[AtoPSelect][ chouka ] ,pic_color[ ekka][pachka] ,pic_color[dokka][chokka],pic_color[tekka][shatka]);
	printf("\ncolor[%d]\n ,pic_color[%d][%d] ,pic_color[%d][%d] ,pic_color[%d][%d],pic_color[%d][%d]\n",AtoPSelect,AtoPSelect, chouka, ekka,pachka,dokka,chokka,tekka,shatka );

}

void page_no_15()
{
		iSetColor(0,0,255);
		iFilledRectangle(0,0,1200,700);
		iShowBMP( 428,450 , color[AtoPSelect]) ;
		iShowBMP(100 + ((AtoPPosi)%4)*200,  200 , pic_color[AtoPSelect][ chouka ] ) ;
		if(thikvul[0]==1) iShowBMP(100 + ((AtoPPosi)%4)*200,  200 , "right.bmp" ) ;
		iShowBMP(100+ ((AtoPPosi+1)%4)*200 ,200 ,pic_color[ ekka][pachka] ) ;
		if(thikvul[1]==1) iShowBMP(100+ ((AtoPPosi+1)%4)*200 ,200 ,"cross.bmp");
		iShowBMP(100+ ((AtoPPosi+2)%4)*200 ,200 , pic_color[dokka][chokka]) ;
		if(thikvul[2]==1) iShowBMP(100+ ((AtoPPosi+2)%4)*200 ,200 ,"cross.bmp" );
		iShowBMP(100+ ((AtoPPosi+3)%4)*200 ,200 , pic_color[tekka][shatka]) ;
		if(thikvul[3]==1) iShowBMP(100+ ((AtoPPosi+3)%4)*200 ,200 , "cross.bmp") ;
		iShowBMP(1000,50,"red.bmp");
		iShowBMP(50,600,"back1.bmp");

}
 
void page_no_16_parameters()   ///// alpha to pic
{
	AtoPSelect=rand() %9 ;
	
	AtoPPosi = rand() % 4 ;
	ekka = (AtoPSelect + rand()%8+1)%9 ;
	dokka = (AtoPSelect + rand()%8+1)%9 ;
	tekka =(AtoPSelect + rand()%8+1)%9 ;
	
	chouka = rand() %3 ;
	
	/*pachka = rand() %pic_alphaCount[ekka];
	chokka = rand() % pic_alphaCount[dokka] ;
	shatka = rand() %pic_alphaCount[tekka];
*/
	printf("%s\n %s %s %s %s\n",pic_color[AtoPSelect][chouka] ,color[AtoPSelect] ,color[ ekka] ,color[dokka],color[tekka]);
}

void page_no_16()
{
		iSetColor(0,0,255);
		iFilledRectangle(0,0,1200,700);
		iShowBMP( 400 ,450 , pic_color[AtoPSelect][chouka]) ;
		iShowBMP(100 + ((AtoPPosi)%4)*200,  200 , color[AtoPSelect] ) ;
		if(thikvul[0]==1) iShowBMP(100 + ((AtoPPosi)%4)*200,  200 , "right.bmp" ) ;
		iShowBMP(100+ ((AtoPPosi+1)%4)*200 ,200 ,color[ ekka] ) ;
		if(thikvul[1]==1) iShowBMP(100+ ((AtoPPosi+1)%4)*200 ,200 ,"cross.bmp");
		iShowBMP(100+ ((AtoPPosi+2)%4)*200 ,200 , color[dokka]) ;
		if(thikvul[2]==1) iShowBMP(100+ ((AtoPPosi+2)%4)*200 ,200 ,"cross.bmp" );
		iShowBMP(100+ ((AtoPPosi+3)%4)*200 ,200 , color[tekka]) ;
		if(thikvul[3]==1) iShowBMP(100+ ((AtoPPosi+3)%4)*200 ,200 , "cross.bmp") ;
		iShowBMP(1000,50,"red.bmp");
		iShowBMP(50,600,"back1.bmp");

}

 void RAND()
 {
	 rand();
 }


void iDraw()
{
	iClear();
	
	switch (page_no){
	case 1:iShowBMP(0, 0, "main_menu.bmp");
		break;
	case 2:iShowBMP(0, 0, "learn1.bmp");
		break;
	case 3:iShowBMP(0, 0, "alphabet.bmp");
		alphaprint(anc);
		break;
	case 4: iShowBMP(0, 0, "number.bmp");
		numprint(anc);
		break;
	case 5: iShowBMP(0, 0, "color.bmp");
		colorprint(anc);
		break;
	case 6: iSetColor(120, 120, 120);
		iFilledRectangle(0, 0, 1200, 700);
		if(bodyvariable>=0 && bodyvariable<14) iShowBMP(320, 100, body[bodyvariable]);
		iShowBMP(566, 16, "pink-2.bmp");
		iShowBMP(418, 16, "pink-1.bmp");
		iSetColor(50, 60,70);
		iFilledRectangle(100, 640, 100, 50);
		iSetColor(50, 50, 200);
		iText(120, 660, "BACK", GLUT_BITMAP_TIMES_ROMAN_24);
		break;
	case 7: iShowBMP(0, 0, "page_no_7.bmp");
		break;
	case 8: iShowBMP(0, 0, "page_no_8.bmp");
		break;

	case 9: ///////    // alpha to pic	// done
		page_no_9();
		break;
	case 10: page_no_10();  // pic to alpha /// done
		break;
	case 11: iShowBMP(0, 0, "page_no_11.bmp");
		break;
	case 12: page_no_12(); // done
		break;
	case 13: page_no_13(); // done
		break;
	case 14: iShowBMP(0, 0, "page_no_14.bmp");
		break;
	case 15: page_no_15() ;
		break;
	case 16: page_no_16();
		break;
	}

}

void iMouseMove(int mx, int my)
{
}

void iMouse(int button, int state, int mx, int my)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if (page_no == 1){
			if (mx >= 400 && mx <= 800){
				if (my >= 450 && my <= 525) page_no = 2;
				else if (my >= 275 && my <= 350) page_no = 7;
				else if (my >= 100 && my <= 175) exit(0);
			}
		}
		else if (page_no == 2){
			if (mx >= 523 && mx <= 725){
				if (my >= 450 && my <= 500) page_no = 3;
				else if (my >= 355 && my <= 408) page_no = 4;
				else if (my >= 255 && my <= 306) page_no = 5;
				else if (my >= 146 && my <= 202) {
					page_no = 6;
					PlaySound(bodysound[bodyvariable], NULL, SND_FILENAME | SND_ASYNC);
				}
			}
			if (mx >= 0 && mx < 100 && my >= 620 && my <= 670) page_no = 1;
		}
		else if (page_no == 3){
			int rowindex, colindex;
			rowindex = (700 - my) / 100;
			colindex = (mx - 775) / 80;

			if ((700 - my) % 100 >= 35 && (mx - 775) % 80 >= 16) {
				alphapicselect[anc - 'a'] = -1;
				anc = rowindex * 4 + colindex  + 'a';
				alphapicselect[anc - 'a'] = 0;
				if (*(alphapicselect + anc - 'a') >= 0 && *(alphapicselect + anc - 'a') < *(alphapiccount + anc - 'a')) PlaySound(*(*(alphasound + anc - 'a') + *(alphapicselect + anc - 'a')), NULL, SND_FILENAME | SND_ASYNC);
			}

			if (mx >= 366 && mx <= 494 && my >= 16 && my <= 80 && alphapicselect[anc - 'a']<*(alphapiccount + anc - 'a')-1){
				alphapicselect[anc - 'a']++;
				if (*(alphapicselect + anc - 'a') >= 0 && *(alphapicselect + anc - 'a') < *(alphapiccount + anc - 'a')) PlaySound(*(*(alphasound + anc - 'a') + *(alphapicselect + anc - 'a')), NULL, SND_FILENAME | SND_ASYNC);
			}
			if (mx >= 218 && mx <= 346 && my >= 16 && my <= 80 && alphapicselect[anc - 'a']>0){
				alphapicselect[anc - 'a']--;
				if (*(alphapicselect + anc - 'a') >= 0 && *(alphapicselect + anc - 'a') < *(alphapiccount + anc - 'a')) PlaySound(*(*(alphasound + anc - 'a') + *(alphapicselect + anc - 'a')), NULL, SND_FILENAME | SND_ASYNC);
			}
			if (mx >= 100 && mx <= 200 && my <= 690 && my >= 640){
				page_no = 2;
				PlaySound("silent.wav", NULL, SND_FILENAME | SND_ASYNC);
			}

		}
		else if (page_no == 4){
			int rowindex, colindex;
			rowindex = (700 - my) / 100;
			colindex = (mx - 775) / 80;

			if ((700 - my) % 100 >= 35 && (mx - 775) % 80 >= 16) {
				numpicselect[anc - '0'] = -1;
				anc = rowindex * 4 + colindex + '0';
				numpicselect[anc - '0'] = 0;
				if (*(numpicselect + anc - '0') >= 0 && *(numpicselect + anc - '0') < 3) PlaySound(*(*(numsound + anc - '0') + *(numpicselect + anc - '0')), NULL, SND_FILENAME | SND_ASYNC);
			}

			if (mx >= 366 && mx <= 494 && my >= 16 && my <= 80 && numpicselect[anc - '0']<2){
				numpicselect[anc - '0']++;
				if (*(numpicselect + anc - '0') >= 0 && *(numpicselect + anc - '0') < 3) PlaySound(*(*(numsound + anc - '0') + *(numpicselect + anc - '0')), NULL, SND_FILENAME | SND_ASYNC);
			}
			if (mx >= 218 && mx <= 346 && my >= 16 && my <= 80 && numpicselect[anc - '0']>0){
				numpicselect[anc - '0']--;
				if (*(numpicselect + anc - '0') >= 0 && *(numpicselect + anc - '0') < 3) PlaySound(*(*(numsound + anc - '0') + *(numpicselect + anc - '0')), NULL, SND_FILENAME | SND_ASYNC);
			}
			if (mx >= 100 && mx <= 200 && my <= 690 && my >= 640){
				page_no = 2;
				PlaySound("silent.wav", NULL, SND_FILENAME | SND_ASYNC);
			}
		}
		else if (page_no == 5){
			int rowindex, colindex;
			rowindex = (700 - my) / 100;
			colindex = (mx - 775) / 80;

			if ((700 - my) % 100 >= 35 && (mx - 775) % 80 >= 16) {
				colorpicselect[anc] = -1;
				anc = rowindex * 4 + colindex;
				colorpicselect[anc] = 0;
				if (*(colorpicselect + anc) >= 0 && *(colorpicselect + anc) < 3) PlaySound(*(*(colorsound + anc) + *(colorpicselect + anc)), NULL, SND_FILENAME | SND_ASYNC);
			}

			if (mx >= 366 && mx <= 494 && my >= 16 && my <= 80 && *(colorpicselect + anc)<2){
				colorpicselect[anc]++;
				if (*(colorpicselect + anc) >= 0 && *(colorpicselect + anc) < 3) PlaySound(*(*(colorsound + anc) + *(colorpicselect + anc)), NULL, SND_FILENAME | SND_ASYNC);
			}
			if (mx >= 218 && mx <= 346 && my >= 16 && my <= 80 && *(colorpicselect + anc)>0){
				colorpicselect[anc]--;
				if (*(colorpicselect + anc) >= 0 && *(colorpicselect + anc) < 3) PlaySound(*(*(colorsound + anc) + *(colorpicselect + anc)), NULL, SND_FILENAME | SND_ASYNC);
			}
			if (mx >= 100 && mx <= 200 && my <= 690 && my >= 640){
				page_no = 2;
				PlaySound("silent.wav", NULL, SND_FILENAME | SND_ASYNC);
			}
		}
		else if (page_no == 6){
			if (mx >= 566 && mx <= 694 && my >= 16 && my <= 80 && bodyvariable<13){
				bodyvariable++;
				PlaySound(bodysound[bodyvariable], NULL, SND_FILENAME | SND_ASYNC);
			}
			if (mx >= 418 && mx <= 546 && my >= 16 && my <= 80 && bodyvariable>0){
				bodyvariable--;
				PlaySound(bodysound[bodyvariable], NULL, SND_FILENAME | SND_ASYNC);
			}
			if (mx >= 100 && mx <= 200 && my <= 690 && my >= 640){
				page_no = 2;
				PlaySound("silent.wav", NULL, SND_FILENAME | SND_ASYNC);
			}
		}

		else if(page_no==7) // quiz er jonno
		{
			if(447 <= mx && mx <=748)
			{
				if(700-318 <= my && my<=700-210) page_no=8 ;  /// 8 9  10 alpha quiz er jonno
				else if(700-463 <= my && my<=700-360) page_no=11 ; // 11 12 13 number quiz er jonno
				else if(700-600 <= my && my<=700-491) page_no=14 ; // 14 15 16 color quiz er jonno
			}
			if(1100<=mx && mx <=1180 && 700-680<=my && my <= 700 - 653) page_no=1;
		}
		else if ( page_no==8 ) // kon type er alpha quiz
		{
			if(300 <= mx && mx <= 895)
			{
				if(700-295 <= my && my <= 700 - 217){ page_no=9 ; page_no_9_parameters() ; }
				else if(700-477 <= my && my <= 700 - 400){ page_no=10 ; page_no_10_parameters() ;}
				
			}
			if(40<=mx && mx <=115 && 700-660<=my && my <= 700 - 620) page_no=7;
			if(1100<=mx && mx <=1180 && 700-680<=my && my <= 700 - 653) page_no=1;
		}
		else if(page_no==9)
		{
			
				if(mx>=100 + ((AtoPPosi)%4)*200 && mx<=100+((AtoPPosi)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[0]=1; PlaySound( "right.wav",NULL ,SND_FILENAME | SND_ASYNC); }
				if(mx>=100+((AtoPPosi+1)%4)*200 && mx<=100+((AtoPPosi+1)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[1]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(mx>=100+((AtoPPosi+2)%4)*200 && mx<=100+((AtoPPosi+2)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[2]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(mx>=100+((AtoPPosi+3)%4)*200 && mx<=100+((AtoPPosi+3)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[3]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(50<= mx && mx <= 50 +80 && 600<=my && my <= 600 + 40){ page_no=8; memset(thikvul,0,sizeof thikvul); }
			
			if(mx>=1000 && mx<=1128 && my>=50 && my<=178)
			{
				page_no_9_parameters(); 
				thikvul[0]=0;
				thikvul[1]=0;
				thikvul[2]=0;
				thikvul[3]=0;
			}
			
		}
		else if(page_no==10)
		{
			
				if(mx>=100 + ((AtoPPosi)%4)*200 && mx<=100+((AtoPPosi)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[0]=1; PlaySound( "right.wav",NULL ,SND_FILENAME | SND_ASYNC); }
				if(mx>=100+((AtoPPosi+1)%4)*200 && mx<=100+((AtoPPosi+1)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[1]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(mx>=100+((AtoPPosi+2)%4)*200 && mx<=100+((AtoPPosi+2)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[2]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(mx>=100+((AtoPPosi+3)%4)*200 && mx<=100+((AtoPPosi+3)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[3]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(50<= mx && mx <= 50 +80 && 600<=my && my <= 600 + 40){ page_no=8; memset(thikvul,0,sizeof thikvul); }
			
			if(mx>=1000 && mx<=1128 && my>=50 && my<=178)
			{
				page_no_10_parameters(); 
				thikvul[0]=0;
				thikvul[1]=0;
				thikvul[2]=0;
				thikvul[3]=0;
			}
		}
		// page no 9 10 hobe na
		
		else if ( page_no==11 ) // kon type er number quiz quiz
		{
			if(300 <= mx && mx <= 895)
			{
				if(700-295 <= my && my <= 700 - 217){ page_no=12 ; page_no_12_13_parameters() ; }
				else if(700-477 <= my && my <= 700 - 400){ page_no=13 ; page_no_12_13_parameters() ;}
				
			}
			if(40<=mx && mx <=115 && 700-660<=my && my <= 700 - 620) page_no=7;
			if(1100<=mx && mx <=1180 && 700-680<=my && my <= 700 - 653) page_no=1;
		}
		else if(page_no==12)
		{
			
				if(mx>=100 + ((AtoPPosi)%4)*200 && mx<=100+((AtoPPosi)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[0]=1; PlaySound( "right.wav",NULL ,SND_FILENAME | SND_ASYNC); }
				if(mx>=100+((AtoPPosi+1)%4)*200 && mx<=100+((AtoPPosi+1)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[1]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(mx>=100+((AtoPPosi+2)%4)*200 && mx<=100+((AtoPPosi+2)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[2]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(mx>=100+((AtoPPosi+3)%4)*200 && mx<=100+((AtoPPosi+3)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[3]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(50<= mx && mx <= 50 +80 && 600<=my && my <= 600 + 40){ page_no=11; memset(thikvul,0,sizeof thikvul); }
			
			if(mx>=1000 && mx<=1128 && my>=50 && my<=178)
			{
				page_no_12_13_parameters() ; 
				thikvul[0]=0;
				thikvul[1]=0;
				thikvul[2]=0;
				thikvul[3]=0;
			}
			
		}
		else if(page_no==13)
		{
			
				if(mx>=100 + ((AtoPPosi)%4)*200 && mx<=100+((AtoPPosi)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[0]=1; PlaySound( "right.wav",NULL ,SND_FILENAME | SND_ASYNC); }
				if(mx>=100+((AtoPPosi+1)%4)*200 && mx<=100+((AtoPPosi+1)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[1]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(mx>=100+((AtoPPosi+2)%4)*200 && mx<=100+((AtoPPosi+2)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[2]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(mx>=100+((AtoPPosi+3)%4)*200 && mx<=100+((AtoPPosi+3)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[3]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(50<= mx && mx <= 50 +80 && 600<=my && my <= 600 + 40){ page_no=11; memset(thikvul,0,sizeof thikvul); }
			
			if(mx>=1000 && mx<=1128 && my>=50 && my<=178)
			{
				page_no_12_13_parameters() ; 
				thikvul[0]=0;
				thikvul[1]=0;
				thikvul[2]=0;
				thikvul[3]=0;
			}
			
		}
		else if ( page_no==14 ) // kon type er number quiz quiz
		{
			if(300 <= mx && mx <= 895)
			{
				if(700-295 <= my && my <= 700 - 217){ page_no=15 ; page_no_15_parameters() ; }
				else if(700-477 <= my && my <= 700 - 400){ page_no=16 ; page_no_16_parameters() ;}
				
			}
			if(40<=mx && mx <=115 && 700-660<=my && my <= 700 - 620) page_no=7;
			if(1100<=mx && mx <=1180 && 700-680<=my && my <= 700 - 653) page_no=1;
		}
		else if(page_no==15)
		{
			
				if(mx>=100 + ((AtoPPosi)%4)*200 && mx<=100+((AtoPPosi)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[0]=1; PlaySound( "right.wav",NULL ,SND_FILENAME | SND_ASYNC); }
				if(mx>=100+((AtoPPosi+1)%4)*200 && mx<=100+((AtoPPosi+1)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[1]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(mx>=100+((AtoPPosi+2)%4)*200 && mx<=100+((AtoPPosi+2)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[2]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(mx>=100+((AtoPPosi+3)%4)*200 && mx<=100+((AtoPPosi+3)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[3]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(50<= mx && mx <= 50 +80 && 600<=my && my <= 600 + 40){ page_no=14; memset(thikvul,0,sizeof thikvul); }
			
			if(mx>=1000 && mx<=1128 && my>=50 && my<=178)
			{
				page_no_15_parameters() ; 
				thikvul[0]=0;
				thikvul[1]=0;
				thikvul[2]=0;
				thikvul[3]=0;
			}
			
		}
		else if(page_no==16)
		{
			
				if(mx>=100 + ((AtoPPosi)%4)*200 && mx<=100+((AtoPPosi)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[0]=1; PlaySound( "right.wav",NULL ,SND_FILENAME | SND_ASYNC); }
				if(mx>=100+((AtoPPosi+1)%4)*200 && mx<=100+((AtoPPosi+1)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[1]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(mx>=100+((AtoPPosi+2)%4)*200 && mx<=100+((AtoPPosi+2)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[2]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(mx>=100+((AtoPPosi+3)%4)*200 && mx<=100+((AtoPPosi+3)%4)*200+128 && my>=200 && my<=328)
				{ thikvul[3]=1; 
				//PlaySound( "name.wav",NULL ,SND_FILENAME | SND_ASYNC); 
				}
				if(50<= mx && mx <= 50 +80 && 600<=my && my <= 600 + 40){ page_no=14; memset(thikvul,0,sizeof thikvul); }
			
			if(mx>=1000 && mx<=1128 && my>=50 && my<=178)
			{
				page_no_16_parameters() ; 
				thikvul[0]=0;
				thikvul[1]=0;
				thikvul[2]=0;
				thikvul[3]=0;
			}
			
		}

		//printf("%c", anc);
	}

	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
	}
}
void iKeyboard(unsigned char key)
{
	if (key == 'q')
	{
		exit(0);
	}
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
	iInitialize(1200, 700, "amader code");
	iSetTimer(321,RAND );
	return 0;
}