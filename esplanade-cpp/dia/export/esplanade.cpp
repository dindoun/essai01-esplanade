/* generated by dia/codegen.py */
/*proprietes communes des elements de l'unviers*/
class noeud 
{
public:
	 dessiner ();
	 actualiser ();
	 evenements ();
	 position;
	 parent;
	 enfants;
	 necessite_Actualisation;
};

class isotope radioactif 
{
public:
	 ModesDeDesintegration;
};

/*assemblage de materiau/cubes*/
class dalle : noeud 
{
public:
	 creemap ();
	[] materiaux;
	 map de radioactivite;
};

class esplanade 
{
public:
	 draw dallage ();
	 draw radioactivite ( z,
	                      type de radioactivite);
	 initialisation ();
	 set dalle ( materiau,
	             no dalle);
	[] dalles;
	vec2 taille;
};

class molécule 
{
public:
	 atomes;
	 proportion;
};

/*cube de matiere homogène*/
class materiau : noeud 
{
public:
	 materiaux;
	 molécules;
	 position;
};

class Mode2Desintegration 
{
public:
	 demi vie;
	 type de radioactivité;
	 energie;
	 m_MultCompteurGeiger;
	 m_MultHumain;
};

class atome 
{
public:
	 isotopes radioactifs;
	 proportion;
};

class Radioactivite 
{
public:
	 CalculeDoseEquivalente ();
};

