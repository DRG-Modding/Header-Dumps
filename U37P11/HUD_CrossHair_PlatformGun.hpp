#ifndef UE4SS_SDK_HUD_CrossHair_PlatformGun_HPP
#define UE4SS_SDK_HUD_CrossHair_PlatformGun_HPP

class UHUD_CrossHair_PlatformGun_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_2;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_CrossHair_PlatformGun(int32 EntryPoint);
};

#endif
