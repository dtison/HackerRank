    string z = "zyyxwwtrrnmlggfeb";
    string z2 = z;
    int r = next_permutation(z2.begin(), z2.end());
    cout << z << " " << z2 << " r " << r << endl;
    
    z = "befgglmnrrtwwxyyz";
    z2 = z;
    r = next_permutation(z2.begin(), z2.end());
    cout << z << " " << z2 << " r " << r << endl;   
    
    return 0;
