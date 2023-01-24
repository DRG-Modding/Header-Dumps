#ifndef UE4SS_SDK_ITM_Season_Progress_Small_HPP
#define UE4SS_SDK_ITM_Season_Progress_Small_HPP

class UITM_Season_Progress_Small_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* I_BG_Black;
    class UImage* I_BG_BlueGradient;
    class UImage* Image_152;
    class UProgressBar* ProgressBar_262;
    class UTextBlock* Text_CurrentLevel;
    class UTextBlock* TextBlock_NextReward;
    class UTextBlock* TextBlock_XP;

    void Construct();
    void ExecuteUbergraph_ITM_Season_Progress_Small(int32 EntryPoint);
};

#endif
