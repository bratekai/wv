/* Copyright (C) 2017 James Balamuta, Justin Lee, Stephane Guerrier, Roberto Molinari
 *
 * This file is part of wv R Methods Package
 *
 * The `wv` R package is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * The `wv` R package is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *  
 */

#ifndef DWT
#define DWT

#include <RcppArmadillo.h>

arma::field<arma::vec> dwt_cpp(arma::vec x, std::string filter_name = "haar", unsigned int nlevels = 4);

arma::field<arma::vec> modwt_cpp(arma::vec x, std::string filter_name = "haar", unsigned int nlevels = 4);

#endif
