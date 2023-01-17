#ifndef UE4SS_SDK_OBJ_DD_AlienEggs_HPP
#define UE4SS_SDK_OBJ_DD_AlienEggs_HPP

class UOBJ_DD_AlienEggs_C : public UOBJ_Gather_Gems_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    FObjectiveMissionIcon GetMissionIcon();
    void GetNumberOfSpeicalEggs(const TArray<class AActor*>& TargetArray, int32& Count);
    void TurnOnSpecialEggs();
    void Receive_StartTracking();
    void ExecuteUbergraph_OBJ_DD_AlienEggs(int32 EntryPoint);
};

#endif
