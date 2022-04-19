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

    void SetUnlocked(bool IsUnlocked);
    void PreConstruct(bool IsDesignTime);
    void ReceiveUnlocked();
    void ExecuteUbergraph_ITM_MasteryBar_Block(int32 EntryPoint);
};

#endif
