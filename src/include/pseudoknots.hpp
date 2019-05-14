//
// Created by David Hoksza on 14.05.19.
//
#ifndef TRAVELER_PSEUDOKNOTS_HPP

#include <vector>
#include "rna_tree.hpp"
#include "geometry.hpp"

typedef std::pair<point, point> line;

struct pseudoknot_segment{
    std::pair<rna_tree::pre_post_order_iterator, rna_tree::pre_post_order_iterator> interval1;
    std::pair<rna_tree::pre_post_order_iterator, rna_tree::pre_post_order_iterator> interval2;

};

struct pseudoknots {

    std::vector<pseudoknot_segment> segments;
    std::vector<line> lines;

    pseudoknots(rna_tree &rna);

};


#define TRAVELER_PSEUDOKNOTS_HPP

#endif //TRAVELER_PSEUDOKNOTS_HPP