//Fonctions réalisées par l'étudiant 1 :
bool estMajeur(int age)
{
    if (age < 0)
    {
        return true;
    }
    if (age >= 18)
    {
        return true;
    }
    return false;
}

int exposant(int nbre, int exp)
{
    int resultat = 1;
    int compteur = 0;
    while (compteur < exp)
    {
        resultat = resultat * nbre;
        compteur = compteur + 1;
    }
    return resultat;
}

float TVA(int prix)
{
    float prixFinal = 0.0;
    if (prix >= 1000)
    {
        prixFinal = prix + prix * 0.196;
    }
    else
    {
        prixFinal = prix + prix * 0.055;
    }
    return prixFinal;
}

int plusGrand(int a, int b, int c)
{
    int grand = a;
    if (b > grand)
    {
        grand = b;
    }
    if (c > grand)
    {
        grand = c;
    }
    return grand;
}


//Fonctions réalisées par l'étudiant 2 :



bool estPair(int nb) {
    if (nb % 2 == 0 || nb % 7 == 0)
        return true;
    return false;
}

int sommeNombre(int nb) {
    int s = 0;
    for (int i = 1; i <= nb; i++)
        s += i;
    s += nb;
    return s;
}

float salaireNet(int salaire) {
    float net = salaire * 0.77;
    return net + net * 0.12;
}

int plusPetit(int a, int b, int c) {
    int m = a;
    if (b < m) m = b;
    if (c < m) m = c;
    return m;
}








//Fonctions réalisées par l'étudiant 3 :
