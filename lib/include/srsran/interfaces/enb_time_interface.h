/**
 *
 * \section COPYRIGHT
 *
 * Copyright 2013-2021 Software Radio Systems Limited
 *
 * By using this file, you agree to the terms and conditions set
 * forth in the LICENSE file which can be found at the top level of
 * the distribution.
 *
 */

#ifndef SRSRAN_ENB_TIME_INTERFACE_H
#define SRSRAN_ENB_TIME_INTERFACE_H

namespace srsenb {

// RAT-agnostic interface to provide timing information to upper layers
class enb_time_interface
{
public:
  /**
   * @brief Called for every tick (currently every ms)
   *
   */
  virtual void tti_clock() = 0;
};

} // namespace srsenb

#endif // SRSRAN_ENB_TIME_INTERFACE_H