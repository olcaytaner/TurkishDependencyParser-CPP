//
// Created by olcay on 14.03.2019.
//

#ifndef DEPENDENCYPARSER_STANFORDDEPENDENCYTYPE_H
#define DEPENDENCYPARSER_STANFORDDEPENDENCYTYPE_H

/**
 * Enumerator class for Stanford Dependency tags
 */
enum class StanfordDependencyType{
    ACOMP, ADVCL, ADVMOD, AGENT, AMOD, APPOS, AUX, AUXPASS, CC, CCOMP, CONJ, COP, CSUBJ, CSUBJPASS, DEP, DET,
    DISCOURSE, DOBJ, EXPL, GOESWITH, IOBJ, MARK, MWE, NEG, NN, NPADVMOD, NSUBJ, NSUBJPASS, NUM, NUMBER, PARATAXIS, PCOMP,
    POBJ, POSS, POSSESSIVE, PRECONJ, PREDET, PREP, PREPC, PRT, PUNCT, QUANTMOD, RCMOD, REF, ROOT, TMOD, VMOD, XCOMP, XSUBJ
};
#endif //DEPENDENCYPARSER_STANFORDDEPENDENCYTYPE_H
