#ifndef UE4SS_SDK_HUD_CrossHair_Drills_HPP
#define UE4SS_SDK_HUD_CrossHair_Drills_HPP

class UHUD_CrossHair_Drills_C : public UUserWidget
{
    class UWidgetAnimation* AnimFadeIn;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_3;
    class UUI_SimpleAngleIndicator_C* UI_SimpleAngleIndicator;
    float Angle;
    float HeightOffset;
    FVector2D ClippingSize;
    float ArrowSize;
    float ArrowOffset;

};

#endif
