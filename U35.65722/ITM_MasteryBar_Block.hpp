#ifndef UE4SS_SDK_ITM_MasteryBar_Block_HPP
#define UE4SS_SDK_ITM_MasteryBar_Block_HPP

class UITM_MasteryBar_Block_C : public UMasteryIconWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimUnlocked;
    class UProgressBar* BG;
    class UImage* Image_BG;
    class UImage* Image_Glow;
    class UImage* Image_Outline;
    class UProgressBar* outline;
    class UCanvasPanel* RootCanvas;
    bool Filled;

    void SetUnlocked(bool IsUnlocked, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default);
    void PreConstruct(bool IsDesignTime);
    void ReceiveUnlocked();
    void ExecuteUbergraph_ITM_MasteryBar_Block(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1);
};

#endif
