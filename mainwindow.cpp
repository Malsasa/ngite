#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>

Dialog::Dialog()
{
    //DEKLARASI LAYOUT
    QVBoxLayout *tinyLayout = new QVBoxLayout;
    QVBoxLayout *tonoLayout = new QVBoxLayout;
    QHBoxLayout *mainLayout = new QHBoxLayout;
    QGroupBox *gbkiri  = new QGroupBox("KIRI");
    QGroupBox *gbkanan = new QGroupBox("KANAN");

    //DEKLARASI BUTTON
    QPushButton *tombol = new QPushButton("TOMBOL");
    QPushButton *timbil = new QPushButton("TIMBIL");
    QPushButton *tumbul = new QPushButton("TUMBUL");
    QPushButton *tembel = new QPushButton("TEMBEL");

    //MEMASUKKAN TOMBOL KE DALAM LAYOUT TINY
    tinyLayout->addWidget(tombol);
    tinyLayout->addWidget(timbil);

        //MENGATUR UKURAN MARGIN KIRI KANAN ATAS BAWAH UNTUK LAYOUT
        //tinyLayout->setContentsMargins(1,1,55,1);

            //MEMASUKKAN LAYOUT TINY KE DALAM GROUPBOX KIRI
            gbkiri->setLayout(tinyLayout);

    //MEMASUKKAN TOMBOL KE DALAM LAYOUT TONO
    tonoLayout->addWidget(tumbul);
    tonoLayout->addWidget(tembel);

        //MEMASUKKAN LAYOUT TONO KE DALAM GROUPBOX KANAN
        gbkanan->setLayout(tonoLayout);

    //MEMASUKKAN KEDUA GROUPBOX KE DALAM LAYOUT HORIZONTAL
    mainLayout->addWidget(gbkiri);
    mainLayout->addWidget(gbkanan);

        //MEMASUKKAN LAYOUT INDUK KE DALAM DIALOG TERTINGGI
        setLayout(mainLayout);

    setWindowTitle("Demo Kolom yang Dibentuk dengan Groupbox dan HBoxLayout");
    this->setSizeGripEnabled(1);

}
