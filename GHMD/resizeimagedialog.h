#ifndef RESIZEIMAGEDIALOG_H
#define RESIZEIMAGEDIALOG_H


class ResizeImageDialog : public QDialog
{
    Q_OBJECT

    double                   m_ratio;

    QLabel                  *m_widthLabel;
    QLabel                  *m_hightLabel;
    QDoubleSpinBox          *m_widthSpinBox;
    QDoubleSpinBox          *m_hightSpinBox;
    QCheckBox               *m_keepRatioCheckBox;

    QPushButton             *m_okButton;
    QPushButton             *m_cancelButton;

    QHBoxLayout             *m_widthLayout;
    QHBoxLayout             *m_hightLayout;
    QHBoxLayout             *m_buttonLayout;
    QVBoxLayout             *m_generalLayout;

private slots:
    void widthChanged(double width);
    void hightChanged(double hight);

public:
    ResizeImageDialog(QWidget * parent = 0, double imageWidth = 100.0, double imageHight = 100.0):QDialog(parent);

    static QPair<double, double> getNewSize(QWidget * parent = 0, double imageWidth = 100.0, double imageHight = 100.0);
};

#endif // RESIZEIMAGEDIALOG_H
