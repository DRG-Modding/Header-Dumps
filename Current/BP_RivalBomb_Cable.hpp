#ifndef UE4SS_SDK_BP_RivalBomb_Cable_HPP
#define UE4SS_SDK_BP_RivalBomb_Cable_HPP

class ABP_RivalBomb_Cable_C : public ASplineCableActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;

    void OnUpdateMaterials();
    void ExecuteUbergraph_BP_RivalBomb_Cable(int32 EntryPoint);
};

#endif
