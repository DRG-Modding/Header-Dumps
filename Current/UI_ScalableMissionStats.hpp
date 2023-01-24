#ifndef UE4SS_SDK_UI_ScalableMissionStats_HPP
#define UE4SS_SDK_UI_ScalableMissionStats_HPP

class UUI_ScalableMissionStats_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border_1;
    class UTextBlock* DATA_Deaths;
    class UTextBlock* Data_Kills;
    class UTextBlock* Data_Mining;
    class UTextBlock* Data_Revives;
    class UImage* Icon_Kills;
    class UImage* Icon_Mining;
    class UImage* Icon_Revives;
    class UImage* Image_Deaths;
    class USizeBox* SizeBox_1;
    class USpacer* Spacer_90;
    float LeftMargin;
    float Width;

    void FromPlayerState(class AFSDPlayerState* PlayerState);
    void SetData(int32 Kills, float ResourcesMined, int32 PlayersRevived, int32 TimesKilled);
    void SetWidth(float Width);
    void SetLeftMargin(float LeftMargin);
    void SetColors();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_ScalableMissionStats(int32 EntryPoint);
};

#endif
