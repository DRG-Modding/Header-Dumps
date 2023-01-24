#ifndef UE4SS_SDK_ITM_SeasonChallengeIcon_HPP
#define UE4SS_SDK_ITM_SeasonChallengeIcon_HPP

class UITM_SeasonChallengeIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Glow;
    class UImage* Icon_Glow;
    class UImage* Image_Challenge;

    void SetIconHovered(bool InHovered, class UTexture2D* Icon, FLinearColor Color);
    void ExecuteUbergraph_ITM_SeasonChallengeIcon(int32 EntryPoint);
};

#endif
