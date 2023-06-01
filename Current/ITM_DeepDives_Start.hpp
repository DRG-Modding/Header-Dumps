#ifndef UE4SS_SDK_ITM_DeepDives_Start_HPP
#define UE4SS_SDK_ITM_DeepDives_Start_HPP

class UITM_DeepDives_Start_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_DeepDives_Launcher_C* Hard_Launcher;
    class UITM_OnlineRestricted_C* ITM_OnlineRestricted;
    class UITM_ServerList_Warning_C* ITM_ServerList_Warning;
    class UITM_DeepDives_Launcher_C* Normal_Launcher;
    class UBasic_RadioButton_C* OptionPrivate;
    class UBasic_RadioButton_C* OptionPublic;
    class UBasic_RadioButton_C* OptionSolo;
    class UBasic_PasswordField_C* PasswordField;
    FITM_DeepDives_Start_COnJoinMission OnJoinMission;
    void OnJoinMission(bool EliteDeepDive);
    FTimerHandle DeepDivesServerTimeout;

    void HandleKeyDown(const FKeyEvent& KeyEvent, bool& OutHandled, FEventReply& OutReply);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void UpdateOptions();
    void OnFailure_00D4455F48B21EAE6492C6AB27B0D8F5();
    void OnSuccess_00D4455F48B21EAE6492C6AB27B0D8F5();
    void OnFailure_14795847495E51F942775B86C1C4BCCF();
    void OnSuccess_14795847495E51F942775B86C1C4BCCF();
    void BndEvt__OptionPublic_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__OptionPrivate_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void BndEvt__OptionSolo_K2Node_ComponentBoundEvent_2_OnCheckStateChanged__DelegateSignature(bool IsChecked);
    void Start Mission(class UDeepDive* mission);
    void BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_5_OnStartMission__DelegateSignature(class UDeepDive* DeepDive);
    void BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_6_OnStartMission__DelegateSignature(class UDeepDive* DeepDive);
    void Open();
    void BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_3_OnJoinMission__DelegateSignature(bool EliteDeepDive);
    void BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_4_OnJoinMission__DelegateSignature(bool EliteDeepDive);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Normal_Launcher_K2Node_ComponentBoundEvent_7_OnRefresh__DelegateSignature(bool success);
    void OnTimeOut();
    void RefreshTimeout(bool success);
    void BndEvt__Hard_Launcher_K2Node_ComponentBoundEvent_8_OnRefresh__DelegateSignature(bool success);
    void BndEvt__ITM_DeepDives_Start_PasswordField_K2Node_ComponentBoundEvent_9_OnTextCommitted__DelegateSignature(FText Text, uint8 CommitMethod);
    void ExecuteUbergraph_ITM_DeepDives_Start(int32 EntryPoint);
    void OnJoinMission__DelegateSignature(bool EliteDeepDive);
};

#endif
