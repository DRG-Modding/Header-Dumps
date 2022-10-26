#ifndef UE4SS_SDK_W_Tutorial_TerrainScanner_HPP
#define UE4SS_SDK_W_Tutorial_TerrainScanner_HPP

class UW_Tutorial_TerrainScanner_C : public UW_TutorialContent_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ABP_TutorialTriggerManager_C* manager;
    bool HasStartedScanning;
    float ScanStartTime;

    void OnShown();
    void UpdateText();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_W_Tutorial_TerrainScanner(int32 EntryPoint);
};

#endif
