#ifndef UE4SS_SDK_OBJ_1st_Refinery_HPP
#define UE4SS_SDK_OBJ_1st_Refinery_HPP

class UOBJ_1st_Refinery_C : URefineryObjective
{
    FPointerToUberGraphFrame UberGraphFrame;

    int32 GetObjectiveAmount(float missionLength);
    FText GetObjectiveDescription(float missionLength);
    FText GetInMissionText(bool K2Node_SwitchEnum_CmpSuccess);
    UTexture2D* GetObjectiveIcon();
    void ReceiveRefinerySpawned(UFSDRefinery* InRefinery);
    void OnRefineryStateChangedBP(ERefineryState InRefineryState);
    void ExecuteUbergraph_OBJ_1st_Refinery(int32 EntryPoint, bool CallFunc_FSDUpdateSessionInfo_ReturnValue, RefineryStateDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UFSDRefinery* K2Node_Event_InRefinery, ERefineryState K2Node_CustomEvent_InRefineryState, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
}

#endif
