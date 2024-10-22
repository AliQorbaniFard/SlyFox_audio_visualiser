/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen1_screen/Screen1ViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen1ViewBase::Screen1ViewBase() :
    flexButtonCallback(this, &Screen1ViewBase::flexButtonCallbackHandler)
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(box1);

    flexButton1.setBitmaps(Bitmap(BITMAP_BUTTON_LARGE_PRESSED_ID), Bitmap(BITMAP_BUTTON_LARGE_RELEASED_ID));
    flexButton1.setBitmapXY(0, 0);
    flexButton1.setAction(flexButtonCallback);
    flexButton1.setPosition(164, 214, 149, 50);
    add(flexButton1);

    textArea1.setXY(203, 227);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(255, 252, 252));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_1LG6));
    add(textArea1);

    dynamicGraph1.setPosition(0, 0, 480, 214);
    dynamicGraph1.setScale(1);
    dynamicGraph1.setGraphRangeX(0, 158);
    dynamicGraph1.setGraphAreaMargin(10, 0, 0, 0);
    dynamicGraph1.setGraphAreaPadding(0, 0, 0, 0);
    dynamicGraph1.setGraphRangeY(0, 3500);
    dynamicGraph1MinorXAxisGrid.setColor(touchgfx::Color::getColorFromRGB(43, 4, 43));
    dynamicGraph1MinorXAxisGrid.setInterval(10);
    dynamicGraph1MinorXAxisGrid.setLineWidth(1);
    dynamicGraph1MinorXAxisGrid.setScale(1);
    dynamicGraph1MinorXAxisGrid.setMajorGrid(dynamicGraph1MajorXAxisGrid);
    dynamicGraph1.addGraphElement(dynamicGraph1MinorXAxisGrid);

    dynamicGraph1MinorYAxisGrid.setColor(touchgfx::Color::getColorFromRGB(43, 4, 43));
    dynamicGraph1MinorYAxisGrid.setInterval(500);
    dynamicGraph1MinorYAxisGrid.setLineWidth(1);
    dynamicGraph1MinorYAxisGrid.setScale(1);
    dynamicGraph1MinorYAxisGrid.setMajorGrid(dynamicGraph1MajorYAxisGrid);
    dynamicGraph1.addGraphElement(dynamicGraph1MinorYAxisGrid);

    dynamicGraph1MajorXAxisGrid.setColor(touchgfx::Color::getColorFromRGB(43, 4, 43));
    dynamicGraph1MajorXAxisGrid.setInterval(50);
    dynamicGraph1MajorXAxisGrid.setLineWidth(2);
    dynamicGraph1MajorXAxisGrid.setScale(1);
    dynamicGraph1.addGraphElement(dynamicGraph1MajorXAxisGrid);

    dynamicGraph1MajorYAxisGrid.setColor(touchgfx::Color::getColorFromRGB(43, 4, 43));
    dynamicGraph1MajorYAxisGrid.setInterval(1000);
    dynamicGraph1MajorYAxisGrid.setLineWidth(2);
    dynamicGraph1MajorYAxisGrid.setScale(1);
    dynamicGraph1.addGraphElement(dynamicGraph1MajorYAxisGrid);

    dynamicGraph1Line1Painter.setColor(touchgfx::Color::getColorFromRGB(137, 9, 176));
    dynamicGraph1Line1.setPainter(dynamicGraph1Line1Painter);
    dynamicGraph1Line1.setLineWidth(2);
    dynamicGraph1.addGraphElement(dynamicGraph1Line1);


    dynamicGraph1.addDataPoint(813.58575f);
    dynamicGraph1.addDataPoint(815.87705f);
    dynamicGraph1.addDataPoint(892.51384f);
    dynamicGraph1.addDataPoint(1027.56539f);
    dynamicGraph1.addDataPoint(1199.82724f);
    dynamicGraph1.addDataPoint(1385.00193f);
    dynamicGraph1.addDataPoint(1558.17132f);
    dynamicGraph1.addDataPoint(1696.31917f);
    dynamicGraph1.addDataPoint(1780.65804f);
    dynamicGraph1.addDataPoint(1798.53347f);
    dynamicGraph1.addDataPoint(1744.71971f);
    dynamicGraph1.addDataPoint(1621.98045f);
    dynamicGraph1.addDataPoint(1440.83931f);
    dynamicGraph1.addDataPoint(1218.58183f);
    dynamicGraph1.addDataPoint(977.58514f);
    dynamicGraph1.addDataPoint(743.13722f);
    dynamicGraph1.addDataPoint(540.95702f);
    dynamicGraph1.addDataPoint(394.65631f);
    dynamicGraph1.addDataPoint(323.38967f);
    dynamicGraph1.addDataPoint(339.92131f);
    dynamicGraph1.addDataPoint(449.29727f);
    dynamicGraph1.addDataPoint(648.25286f);
    dynamicGraph1.addDataPoint(925.41456f);
    dynamicGraph1.addDataPoint(1262.27841f);
    dynamicGraph1.addDataPoint(1634.87221f);
    dynamicGraph1.addDataPoint(2015.94247f);
    dynamicGraph1.addDataPoint(2377.45639f);
    dynamicGraph1.addDataPoint(2693.17865f);
    dynamicGraph1.addDataPoint(2941.07565f);
    dynamicGraph1.addDataPoint(3105.31637f);
    dynamicGraph1.addDataPoint(3177.67816f);
    dynamicGraph1.addDataPoint(3158.22327f);
    dynamicGraph1.addDataPoint(3055.18248f);
    dynamicGraph1.addDataPoint(2884.05881f);
    dynamicGraph1.addDataPoint(2666.03964f);
    dynamicGraph1.addDataPoint(2425.87246f);
    dynamicGraph1.addDataPoint(2189.41112f);
    dynamicGraph1.addDataPoint(1981.07104f);
    dynamicGraph1.addDataPoint(1821.44072f);
    dynamicGraph1.addDataPoint(1725.28106f);
    dynamicGraph1.addDataPoint(1700.10649f);
    dynamicGraph1.addDataPoint(1745.48522f);
    dynamicGraph1.addDataPoint(1853.12581f);
    dynamicGraph1.addDataPoint(2007.74115f);
    dynamicGraph1.addDataPoint(2188.60505f);
    dynamicGraph1.addDataPoint(2371.6496f);
    dynamicGraph1.addDataPoint(2531.89865f);
    dynamicGraph1.addDataPoint(2646.00021f);
    dynamicGraph1.addDataPoint(2694.61057f);
    dynamicGraph1.addDataPoint(2664.3974f);
    dynamicGraph1.addDataPoint(2549.46575f);
    dynamicGraph1.addDataPoint(2352.0667f);
    dynamicGraph1.addDataPoint(2082.51793f);
    dynamicGraph1.addDataPoint(1758.34168f);
    dynamicGraph1.addDataPoint(1402.70143f);
    dynamicGraph1.addDataPoint(1042.28679f);
    dynamicGraph1.addDataPoint(704.84931f);
    dynamicGraph1.addDataPoint(416.62602f);
    dynamicGraph1.addDataPoint(199.89869f);
    dynamicGraph1.addDataPoint(70.92347f);
    dynamicGraph1.addDataPoint(38.43016f);
    dynamicGraph1.addDataPoint(102.83532f);
    dynamicGraph1.addDataPoint(256.24458f);
    dynamicGraph1.addDataPoint(483.24312f);
    dynamicGraph1.addDataPoint(762.39746f);
    dynamicGraph1.addDataPoint(1068.323f);
    dynamicGraph1.addDataPoint(1374.11699f);
    dynamicGraph1.addDataPoint(1653.92185f);
    dynamicGraph1.addDataPoint(1885.37113f);
    dynamicGraph1.addDataPoint(2051.6821f);
    dynamicGraph1.addDataPoint(2143.19344f);
    dynamicGraph1.addDataPoint(2158.20044f);
    dynamicGraph1.addDataPoint(2103.00842f);
    dynamicGraph1.addDataPoint(1991.20088f);
    dynamicGraph1.addDataPoint(1842.19524f);
    dynamicGraph1.addDataPoint(1679.22794f);
    dynamicGraph1.addDataPoint(1526.96631f);
    dynamicGraph1.addDataPoint(1408.98063f);
    dynamicGraph1.addDataPoint(1345.32329f);
    dynamicGraph1.addDataPoint(1350.45192f);
    dynamicGraph1.addDataPoint(1431.69957f);
    dynamicGraph1.addDataPoint(1588.4422f);
    dynamicGraph1.addDataPoint(1812.04603f);
    dynamicGraph1.addDataPoint(2086.60174f);
    dynamicGraph1.addDataPoint(2390.37569f);
    dynamicGraph1.addDataPoint(2697.83933f);
    dynamicGraph1.addDataPoint(2982.08118f);
    dynamicGraph1.addDataPoint(3217.36881f);
    dynamicGraph1.addDataPoint(3381.61327f);
    dynamicGraph1.addDataPoint(3458.49777f);
    dynamicGraph1.addDataPoint(3439.06456f);
    dynamicGraph1.addDataPoint(3322.60617f);
    dynamicGraph1.addDataPoint(3116.77437f);
    dynamicGraph1.addDataPoint(2836.89558f);
    dynamicGraph1.addDataPoint(2504.55829f);
    dynamicGraph1.addDataPoint(2145.60805f);
    dynamicGraph1.addDataPoint(1787.74299f);
    dynamicGraph1.addDataPoint(1457.94123f);
    dynamicGraph1.addDataPoint(1179.96759f);
    dynamicGraph1.addDataPoint(972.19929f);
    dynamicGraph1.addDataPoint(845.97928f);
    dynamicGraph1.addDataPoint(804.65454f);
    dynamicGraph1.addDataPoint(843.39043f);
    dynamicGraph1.addDataPoint(949.77693f);
    dynamicGraph1.addDataPoint(1105.16578f);
    dynamicGraph1.addDataPoint(1286.60708f);
    dynamicGraph1.addDataPoint(1469.19551f);
    dynamicGraph1.addDataPoint(1628.59716f);
    dynamicGraph1.addDataPoint(1743.51038f);
    dynamicGraph1.addDataPoint(1797.82057f);
    dynamicGraph1.addDataPoint(1782.23888f);
    dynamicGraph1.addDataPoint(1695.26484f);
    dynamicGraph1.addDataPoint(1543.37865f);
    dynamicGraph1.addDataPoint(1340.44385f);
    dynamicGraph1.addDataPoint(1106.37766f);
    dynamicGraph1.addDataPoint(865.21766f);
    dynamicGraph1.addDataPoint(642.77213f);
    dynamicGraph1.addDataPoint(464.08193f);
    dynamicGraph1.addDataPoint(350.94041f);
    dynamicGraph1.addDataPoint(319.71246f);
    dynamicGraph1.addDataPoint(379.66498f);
    dynamicGraph1.addDataPoint(531.97182f);
    dynamicGraph1.addDataPoint(769.49118f);
    dynamicGraph1.addDataPoint(1077.33858f);
    dynamicGraph1.addDataPoint(1434.20192f);
    dynamicGraph1.addDataPoint(1814.27309f);
    dynamicGraph1.addDataPoint(2189.61113f);
    dynamicGraph1.addDataPoint(2532.7103f);
    dynamicGraph1.addDataPoint(2819.02622f);
    dynamicGraph1.addDataPoint(3029.21775f);
    dynamicGraph1.addDataPoint(3150.88952f);
    dynamicGraph1.addDataPoint(3179.66829f);
    dynamicGraph1.addDataPoint(3119.51086f);
    dynamicGraph1.addDataPoint(2982.21563f);
    dynamicGraph1.addDataPoint(2786.1865f);
    dynamicGraph1.addDataPoint(2554.57059f);
    dynamicGraph1.addDataPoint(2312.95117f);
    dynamicGraph1.addDataPoint(2086.82048f);
    dynamicGraph1.addDataPoint(1899.07783f);
    dynamicGraph1.addDataPoint(1767.79595f);
    dynamicGraph1.addDataPoint(1704.47219f);
    dynamicGraph1.addDataPoint(1712.93381f);
    dynamicGraph1.addDataPoint(1789.00329f);
    dynamicGraph1.addDataPoint(1920.95534f);
    dynamicGraph1.addDataPoint(2090.72069f);
    dynamicGraph1.addDataPoint(2275.71886f);
    dynamicGraph1.addDataPoint(2451.14111f);
    dynamicGraph1.addDataPoint(2592.46109f);
    dynamicGraph1.addDataPoint(2677.92806f);
    dynamicGraph1.addDataPoint(2690.79961f);
    dynamicGraph1.addDataPoint(2621.09546f);
    dynamicGraph1.addDataPoint(2466.70044f);
    dynamicGraph1.addDataPoint(2233.70782f);
    dynamicGraph1.addDataPoint(1935.96727f);
    dynamicGraph1.addDataPoint(1593.87948f);
    dynamicGraph1.addDataPoint(1232.55172f);
    dynamicGraph1.addDataPoint(879.49112f);
    dynamicGraph1.addDataPoint(562.05716f);
    dynamicGraph1.addDataPoint(304.91826f);
    dynamicGraph1.addDataPoint(127.7571f);
    add(dynamicGraph1);
}

Screen1ViewBase::~Screen1ViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void Screen1ViewBase::setupScreen()
{

}

void Screen1ViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &flexButton1)
    {
        //Interaction1
        //When flexButton1 clicked change screen to Screen2
        //Go to Screen2 with screen transition towards East
        application().gotoScreen2ScreenSlideTransitionEast();
    }
}
