#include "declarativelineseries.h"
#include "declarativechart.h"
#include "qchart.h"
#include "qlineseries.h"

QTCOMMERCIALCHART_BEGIN_NAMESPACE

DeclarativeLineSeries::DeclarativeLineSeries(QObject *parent) :
    QLineSeries(parent)
{
}

void DeclarativeLineSeries::seriesComplete()
{
    DeclarativeChart *declarativeChart = qobject_cast<DeclarativeChart *>(parent());

    if (declarativeChart) {
        QChart *chart = qobject_cast<QChart *>(declarativeChart->m_chart);
        Q_ASSERT(chart);
        chart->addSeries(this);
    }
}

QObject *DeclarativeLineSeries::seriesObject()
{
    return this;
}

QDeclarativeListProperty<DeclarativeXyPoint> DeclarativeLineSeries::points()
{
    return DeclarativeXySeries::points();
}

void DeclarativeLineSeries::appendPoints(QDeclarativeListProperty<DeclarativeXyPoint> *list,
                       DeclarativeXyPoint *element)
{
    DeclarativeXySeries::appendPoints(list, element);
}

#include "moc_declarativelineseries.cpp"

QTCOMMERCIALCHART_END_NAMESPACE
