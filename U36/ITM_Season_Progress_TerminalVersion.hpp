#ifndef UE4SS_SDK_ITM_Season_Progress_TerminalVersion_HPP
#define UE4SS_SDK_ITM_Season_Progress_TerminalVersion_HPP

class UITM_Season_Progress_TerminalVersion_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_3;
    class UImage* I_BG_Black;
    class UImage* I_BG_BlueGradient;
    class UImage* Image_152;
    class UProgressBar* ProgressBar_262;
    class UTextBlock* Text_CurrentLevel;
    class UTextBlock* Text_CurrentLevel_1;
    class UTextBlock* TextBlock_XP;

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_Season_Progress_TerminalVersion(int32 EntryPoint);
};

#endif
