#ifndef UE4SS_SDK_Wnd_SeasonBriefing_HPP
#define UE4SS_SDK_Wnd_SeasonBriefing_HPP

class UWnd_SeasonBriefing_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBorder* Border;
    class UBorder* Border_1;
    class UBorder* Border_4;
    class UBorder* Border_6;
    class UBasic_ButtonCutCorner_C* Button_Mute;
    class UImage* CreatureImage;
    class UImage* I_Audio_Pause;
    class UImage* I_Audio_Play;
    class UImage* Image_InfoIcon;
    class URichTextSizable* SeasonBriefing;
    class USizeBox* SizeBox_Brief;
    class UEnemyShowroomController* Showroom;
    bool IsRotatingLeft;
    TSoftClassPtr<AEnemyShowroomItem> ShowRoomBrief;
    class UAudioComponent* BriefingSound;
    class USoundBase* Sound_SeasonBriefing;

    void OnLoaded_F236D25549C14A3D787E7F9A8268FFEB(UClass* Loaded);
    void OnLoaded_E25AAB194DE5E00F1D91D68D1A67E597(UClass* Loaded);
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnShown();
    void OnClosed();
    void AsyncLoadShowRoom();
    void SetMuteVisible(bool Muted);
    void BndEvt__Wnd_SeasonBriefing_Button_Mute_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UBasic_ButtonCutCorner_C* Button);
    void OnAudioFinished();
    void ExecuteUbergraph_Wnd_SeasonBriefing(int32 EntryPoint);
};

#endif
