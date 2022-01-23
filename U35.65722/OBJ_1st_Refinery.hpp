#ifndef UE4SS_SDK_OBJ_1st_Refinery_HPP
#define UE4SS_SDK_OBJ_1st_Refinery_HPP

class UOBJ_1st_Refinery_C : public URefineryObjective
{
    FPointerToUberGraphFrame UberGraphFrame;

    int32 GetObjectiveAmount(float missionLength);
    FText GetObjectiveDescription(float missionLength);
    FText GetInMissionText(bool K2Node_SwitchEnum_CmpSuccess);
    class UTexture2D* GetObjectiveIcon();
    void ReceiveRefinerySpawned(class AFSDRefinery* InRefinery);
    void OnRefineryStateChangedBP(ERefineryState InRefineryState);
    void ExecuteUbergraph_OBJ_1st_Refinery(int32 EntryPoint, bool CallFunc_FSDUpdateSessionInfo_ReturnValue, FExecuteUbergraph_OBJ_1st_RefineryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class AFSDRefinery* K2Node_Event_InRefinery, ERefineryState K2Node_CustomEvent_InRefineryState, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

#endif
