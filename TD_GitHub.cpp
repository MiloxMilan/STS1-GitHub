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
    if (exp > 99) return -1;
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
    if (a == b || b == c || a == c) {
        int petit = a;
        if (b < petit) petit = b;
        if (c < petit) petit = c;
        return petit;
    }
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

float salaireNet(int salaireBrut, float chargeSalariale, int prime) 
{
    float net = salaireBrut * (1.0f - (chargeSalariale / 100.0f));
    return net + prime;
}

int plusPetit(int a, int b, int c) {
    int m = a;
    if (b < m) m = b;
    if (c < m) m = c;
    return m;
}








//Fonctions réalisées par l'étudiant 3 :

bool estImpair(int nombre) {
    // Impair (modulo 2 différent de 0) OU divisible par 8
    if (nombre % 2 != 0 || nombre % 8 == 0) {
        return true;
    }
    return false;
}

float moyenne(float a, float b, float c) {
    float res = (a + b + c) / 3.0f;
    // Modifié par Étudiant 2 : Retourne -1 si négatif
    if (res < 0) return -1.0f;
    return res;
}

float reduction(float prix, float pourcentage, float tvaValeur) {
    // Modifié par Étudiant 1 : La TVA est passée en paramètre
    float prixRemise = prix * (1.0f - (pourcentage / 100.0f));
    return prixRemise * (1.0f + (tvaValeur / 100.0f));
}

int nombreMedian(int a, int b, int c) {
    // Modifié par Étudiant 2 : 999 si au moins deux égaux
    if (a == b || b == c || a == c) {
        return 999;
    }

    // Calcul du médian
    if ((a <= b && b <= c) || (c <= b && b <= a)) return b;
    if ((b <= a && a <= c) || (c <= a && a <= b)) return a;
    return c;
}
