#ifndef UE4SS_SDK_HUD_CrossHair_FlareGun_HPP
#define UE4SS_SDK_HUD_CrossHair_FlareGun_HPP

class UHUD_CrossHair_FlareGun_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Dot;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* Image_4;
    class UImage* Image_5;
    class UImage* Image_6;
    class UImage* Image_7;
    class UImage* Image_8;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_CrossHair_FlareGun(int32 EntryPoint);
};

#endif
