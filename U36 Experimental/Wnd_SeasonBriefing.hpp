#ifndef UE4SS_SDK_Wnd_SeasonBriefing_HPP
#define UE4SS_SDK_Wnd_SeasonBriefing_HPP

class UWnd_SeasonBriefing_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UBorder* Border_1;
    class UBorder* Border_4;
    class UBorder* Border_6;
    class UImage* CreatureImage;
    class UImage* Image_InfoIcon;
    class URichTextSizable* SeasonBriefing;
    class USizeBox* SizeBox_Brief;
    class UEnemyShowroomController* Showroom;
    bool IsRotatingLeft;

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void OnShown();
    void OnClosed();
    void ExecuteUbergraph_Wnd_SeasonBriefing(int32 EntryPoint);
};

#endif
