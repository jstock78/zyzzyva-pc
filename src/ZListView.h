//---------------------------------------------------------------------------
// ZListView.h
//
// A customized list view.
//
// Copyright 2005 Michael W Thelen <mike@pietdepsi.com>.
//
// This file is part of Zyzzyva.
//
// Zyzzyva is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// Zyzzyva is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//---------------------------------------------------------------------------

#ifndef ZLISTVIEW_H
#define ZLISTVIEW_H

#include <qlistview.h>

class WordEngine;

class ZListView : public QListView
{
  Q_OBJECT
  public:
    ZListView (WordEngine* e, QWidget* parent = 0, const char* name = 0,
               WFlags f = 0);
    ~ZListView();

    virtual void setFont (const QFont& font);

  public slots:
    void doReturnPressed (QListViewItem* item);
    void doPopupMenu (QListViewItem* item, const QPoint& point, int);
    void displayDefinition (const QString& word);

  private:
    WordEngine* wordEngine;
};

#endif // ZLISTVIEW_H

