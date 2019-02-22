/*
 * barrier -- mouse and keyboard sharing utility
 * Copyright (C) 2018 Debauchee Open Source Group
 *
 * This package is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * found in the file LICENSE that should have accompanied this file.
 *
 * This package is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined(SELECTAREA__H)

#define SELECTAREA__H

#include <QtGui>
#include <QtWidgets>

class SelectArea : public QWidget
{
	Q_OBJECT

private:
	QRect m_selectedArea;
	QBrush m_selectBackground;
	QPen m_selectBorder;

public:
	SelectArea(QWidget *parent);

	void resizeToFullScreen();
	QRect getWholeScreenArea(void);
	void setSelectedArea(QRect r);

protected:
	void paintEvent(QPaintEvent *event);
	

private slots:

	
};

#endif // SELECTAREA__H