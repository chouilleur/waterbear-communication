#ifndef AELEMENT_H
#define AELEMENT_H

#include <QObject>
#include <QRadioButton>
#include <QLineEdit>

class PinConfig;

class AElement : public QObject
{
    Q_OBJECT
public:
    explicit AElement(PinConfig *pinConfig, QString name, QObject *parent = 0);
    QString getName() const;
    QRadioButton *getRadioButton() const;
    void displayElem();

private:
    void displayConfig();

    PinConfig *pinConfig;
    QString name;
    QRadioButton *radioButton;

    // Test
    QLineEdit *minValue;
    QLineEdit *maxValue;

protected:
    void setConfigLayout(QLayout *layout);
    void setDisplayLayout(QLayout *layout);

public slots:
    void displayOut();
    void sendValueToArduino(int value);

};

#endif // AELEMENT_H