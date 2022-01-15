#ifndef UE4SS_SDK_HUD_CrossHair_Basic02_DUPL_1_HPP
#define UE4SS_SDK_HUD_CrossHair_Basic02_DUPL_1_HPP

class UHUD_CrossHair_Basic02_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* Image_1;
    float Opacity High;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_HUD_CrossHair_Basic02(int32 EntryPoint, FLinearColor CallFunc_MenuColors_OutputColor, bool K2Node_Event_IsDesignTime);
}

#endif
