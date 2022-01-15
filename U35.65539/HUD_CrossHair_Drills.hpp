#ifndef UE4SS_SDK_HUD_CrossHair_Drills_HPP
#define UE4SS_SDK_HUD_CrossHair_Drills_HPP

class UHUD_CrossHair_Drills_C : UUserWidget
{
    UWidgetAnimation* AnimFadeIn;
    UImage* Image_0;
    UImage* Image_1;
    UImage* Image_2;
    UImage* Image_3;
    UUI_SimpleAngleIndicator_C* UI_SimpleAngleIndicator;
    float Angle;
    float HeightOffset;
    FVector2D ClippingSize;
    float ArrowSize;
    float ArrowOffset;
}

#endif
