#ifndef UE4SS_SDK_HUD_CrossHair_BasicDot_HPP
#define UE4SS_SDK_HUD_CrossHair_BasicDot_HPP

class UHUD_CrossHair_BasicDot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_1;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_CrossHair_BasicDot(int32 EntryPoint);
};

#endif
