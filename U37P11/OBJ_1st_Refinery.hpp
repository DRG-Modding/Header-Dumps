#ifndef UE4SS_SDK_OBJ_1st_Refinery_HPP
#define UE4SS_SDK_OBJ_1st_Refinery_HPP

class UOBJ_1st_Refinery_C : public URefineryObjective
{
    FPointerToUberGraphFrame UberGraphFrame;

    int32 GetObjectiveAmount(float missionLength);
    FText GetObjectiveDescription(float missionLength);
    FText GetInMissionText();
    class UTexture2D* GetObjectiveIcon();
    void ReceiveRefinerySpawned(class AFSDRefinery* InRefinery);
    void OnRefineryStateChangedBP(ERefineryState InRefineryState);
    void ExecuteUbergraph_OBJ_1st_Refinery(int32 EntryPoint);
};

#endif
