/*
 * WebRawBiChart.hpp
# ------------------------------------------------------------------------ #
# Copyright (c) 2010-2015 Rodrigue Chakode (rodrigue.chakode@ngrt4n.com)   #
# Creation: 17-07-2015                                                     #
#                                                                          #
# This file is part of RealOpInsight (http://RealOpInsight.com) authored   #
# by Rodrigue Chakode <rodrigue.chakode@gmail.com>                         #
#                                                                          #
# RealOpInsight is free software: you can redistribute it and/or modify    #
# it under the terms of the GNU General Public License as published by     #
# the Free Software Foundation, either version 3 of the License, or        #
# (at your option) any later version.                                      #
#                                                                          #
# The Software is distributed in the hope that it will be useful,          #
# but WITHOUT ANY WARRANTY; without even the implied warranty of           #
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            #
# GNU General Public License for more details.                             #
#                                                                          #
# You should have received a copy of the GNU General Public License        #
# along with RealOpInsight.  If not, see <http://www.gnu.org/licenses/>.   #
#--------------------------------------------------------------------------#
 */

#ifndef WEBBIRAWCHART_HPP
#define WEBBIRAWCHART_HPP

#include "dbo/src/DbObjects.hpp"
#include <Wt/Chart/WCartesianChart.h>

class WebPlatformStatusRaw : public Wt::Chart::WCartesianChart
{
public:
  WebPlatformStatusRaw(const std::string& vame);
  void setViewName(const std::string& vname) {m_viewName = vname;}
  std::string viewName() const {return m_viewName;}
  void updateData(const ListofPlatformStatusT& data);

private:
  std::string m_viewName;
  void setChartTitle(void);
};

#endif // WEBBIRAWCHART_HPP
