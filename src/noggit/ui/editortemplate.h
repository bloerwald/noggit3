// This file is part of Noggit3, licensed under GNU General Public License (version 3).

#pragma once

#include <noggit/ui/MainWindow.h>

#include <QWidget>
#include <QToolBar>
#include <QGridLayout>

namespace noggit
{
  namespace ui
  {
    class EditorTemplate : public QWidget
    {
      Q_OBJECT

    public:
      explicit EditorTemplate(MainWindow* parent);

      void addPropBar(QToolBar* bar);
      void addToolBar(QToolBar* bar);
      void addEditorMenu(QMenu* menu);
      void setEditor(QWidget* newEditor);

    private:
      QGridLayout* layout;
      QWidget* editor;
      MainWindow* mainWindow;

    signals:
      void parentChanged();
    };
  }
}