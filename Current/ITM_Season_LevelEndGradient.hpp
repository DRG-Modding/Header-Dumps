#ifndef UE4SS_SDK_ITM_Season_LevelEndGradient_HPP
#define UE4SS_SDK_ITM_Season_LevelEndGradient_HPP

class UITM_Season_LevelEndGradient_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* BG_Color;
    class UImage* I_VerticalLine;
    class UImage* Image_NotUnlocked;
    class UProgressBar* ProgressBar_Level;
    class URetainerBox* RetainerBox_Gradient;
    class UTextBlock* TextBlock_Level;
    int32 Level;
    bool HasNormalReward;
    bool HasSpecialReward;
    bool NormalRewardLoaded;
    bool SpecialRewardLoaded;

    void Set Data(int32 Level, bool FirstInRow);
    void SlowDownRender();
    void OnShown();
    void ExecuteUbergraph_ITM_Season_LevelEndGradient(int32 EntryPoint);
};

#endif
