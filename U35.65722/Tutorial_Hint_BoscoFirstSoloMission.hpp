#ifndef UE4SS_SDK_Tutorial_Hint_BoscoFirstSoloMission_HPP
#define UE4SS_SDK_Tutorial_Hint_BoscoFirstSoloMission_HPP

class UTutorial_Hint_BoscoFirstSoloMission_C : public UTutorialHintComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float FirstTimeDelay;
    FTutorialHint ReminderHint;

    void ReceiveOnInitialized();
    void OnLaserPointerEvent(const FLaserPointerTarget& HitInfo);
    void ExecuteUbergraph_Tutorial_Hint_BoscoFirstSoloMission(int32 EntryPoint, const FLaserPointerTarget K2Node_CustomEvent_hitInfo, bool Temp_bool_Has_Been_Initd_Variable, FExecuteUbergraph_Tutorial_Hint_BoscoFirstSoloMissionK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

#endif
