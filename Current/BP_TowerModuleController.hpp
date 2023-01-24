#ifndef UE4SS_SDK_BP_TowerModuleController_HPP
#define UE4SS_SDK_BP_TowerModuleController_HPP

class ABP_TowerModuleController_C : public AHostileGuntowerModuleController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ExecuteUbergraph_BP_TowerModuleController(int32 EntryPoint);
};

#endif
