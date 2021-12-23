/*

    a,b,c,d,e,f ->6
    ac,ad,ae,af ->4
    ace,acf,adf ->3
    bd,be,bf ->3
    bdf ->1
    ce,cf ->2
    ------------
    6:20

    a,b,c,d,e,f,g ->7 
    ac,ad,ae,af,ag ->5
    bd,be,bf,bg ->4
    ce,cf,cg ->3
    df,dg->2
    eg->1
    ace,acf,acg,adf,adg,aeg ->6
    bdf,bdg,beg ->3
    ceg->1
    aceg->1
    ----------------
    7:33

    a,b,c,d,e,f,g,h ->8
    ac,ad,ae,af,ag,ah->6
    bd,be,bf,bg,bh ->5
    ce,cf,cg,ch->4
    df,dg,dh->3
    eg,eh->2
    fh->1
    ace,acf,acg,ach,adf,adg,adh,aeg,aeh,afh->10
    bdf,bdg,bdh,beg,beh,bfh->6
    ceg,ceh->2
    dfh->1
    aceg,aceh,bdfh->3
    --------------------------
    8: 51
    


*/
