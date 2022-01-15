#ifndef UE4SS_SDK_HUD_CrossHair_FlareGun_HPP
#define UE4SS_SDK_HUD_CrossHair_FlareGun_HPP

class UHUD_CrossHair_FlareGun_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Dot;
    UImage* Image_1;
    UImage* Image_2;
    UImage* Image_4;
    UImage* Image_5;
    UImage* Image_6;
    UImage* Image_7;
    UImage* Image_8;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_CrossHair_FlareGun(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
