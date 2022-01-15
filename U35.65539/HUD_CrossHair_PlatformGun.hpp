#ifndef UE4SS_SDK_HUD_CrossHair_PlatformGun_HPP
#define UE4SS_SDK_HUD_CrossHair_PlatformGun_HPP

class UHUD_CrossHair_PlatformGun_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_0;
    UImage* Image_1;
    UImage* Image_2;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_CrossHair_PlatformGun(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif
