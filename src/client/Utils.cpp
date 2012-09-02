/*
 * Utils.cpp
# ------------------------------------------------------------------------ #
# Copyright (c) 2010-2012 Rodrigue Chakode (rodrigue.chakode@ngrt4n.com)   #
# Last Update : 11-08-2012                                                 #
#                                                                          #
# This file is part of NGRT4N (http://ngrt4n.com).                         #
#                                                                          #
# NGRT4N is free software: you can redistribute it and/or modify           #
# it under the terms of the GNU General Public License as published by     #
# the Free Software Foundation, either version 3 of the License, or        #
# (at your option) any later version.                                      #
#                                                                          #
# NGRT4N is distributed in the hope that it will be useful,                #
# but WITHOUT ANY WARRANTY; without even the implied warranty of           #
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            #
# GNU General Public License for more details.                             #
#                                                                          #
# You should have received a copy of the GNU General Public License        #
# along with NGRT4N.  If not, see <http://www.gnu.org/licenses/>.          #
#--------------------------------------------------------------------------#
 */

#include "Utils.hpp"

QString Utils::statusToString(const qint32 & _status)
{
    switch(_status)
    {
    case MonitorBroker::OK:
        return "Normal";
        break;

    case MonitorBroker::WARNING:
        return  "Warning";
        break;

    case MonitorBroker::CRITICAL:
        return  "Critical";
        break;

    default:
        return "Unknown";
        break;
    }

    return "Unknown";
}


void Utils::clear(Struct& data) {
    data.cnodes.clear();
    data.nodes.clear();
    data.tree_items.clear();
}

void Utils::alert(const QString  & msg) {
        QMessageBox::warning(0, + "Warning | " + appName, msg, QMessageBox::Yes);
}

