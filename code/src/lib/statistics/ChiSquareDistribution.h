/******************************************************************************
 * Copyright (C) 2011 by Jerome Maye                                          *
 * jerome.maye@gmail.com                                                      *
 *                                                                            *
 * This program is free software; you can redistribute it and/or modify       *
 * it under the terms of the Lesser GNU General Public License as published by*
 * the Free Software Foundation; either version 3 of the License, or          *
 * (at your option) any later version.                                        *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the               *
 * Lesser GNU General Public License for more details.                        *
 *                                                                            *
 * You should have received a copy of the Lesser GNU General Public License   *
 * along with this program. If not, see <http://www.gnu.org/licenses/>.       *
 ******************************************************************************/

/** \file ChiSquareDistribution.h
    \brief This file defines the ChiSquareDistribution class, which represents
           a chi-square distribution
  */

#ifndef CHISQUAREDISTRIBUTION_H
#define CHISQUAREDISTRIBUTION_H

#include "statistics/GammaDistribution.h"

/** The ChiSquareDistribution class represents a chi-square distribution,
    i.e., a continuous distribution that models the distribution of a sum of
    the squares of k independent standard normal random variables (k degrees).
    \brief Chi-Square distribution
  */
class ChiSquareDistribution :
  public GammaDistribution<> {
public:
  /** \name Constructors/destructor
    @{
    */
  /// Constructs distribution from parameters
  inline ChiSquareDistribution(double degrees = 1);
  /// Copy constructor
  inline ChiSquareDistribution(const ChiSquareDistribution& other);
  /// Assignment operator
  inline ChiSquareDistribution& operator = (const ChiSquareDistribution& other);
  /// Destructor
  inline virtual ~ChiSquareDistribution();
  /** @}
    */

  /** \name Accessors
    @{
    */
  /// Sets the degrees of freedom of the distribution
  inline void setDegrees(double degrees);
  /// Returns the degrees of freedom of the distribution
  inline double getDegrees() const;
  /// Returns the median of the distribution
  inline Median getMedian() const;
  /** @}
    */

protected:
  /** \name Stream methods
    @{
    */
  /// Reads from standard input
  inline virtual void read(std::istream& stream);
  /// Writes to standard output
  inline virtual void write(std::ostream& stream) const;
  /// Reads from a file
  inline virtual void read(std::ifstream& stream);
  /// Writes to a file
  inline virtual void write(std::ofstream& stream) const;
  /** @}
    */

};

#include "statistics/ChiSquareDistribution.tpp"

#endif // CHISQUAREDISTRIBUTION_H
