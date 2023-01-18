#ifndef UE4SS_SDK_HUD_CrossHair_Basic02_HPP
#define UE4SS_SDK_HUD_CrossHair_Basic02_HPP

class UHUD_CrossHair_Basic02_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_1;
    float Opacity High;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_CrossHair_Basic02(int32 EntryPoint);
};

#endif
