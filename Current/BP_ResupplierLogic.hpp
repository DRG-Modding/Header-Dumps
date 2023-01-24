#ifndef UE4SS_SDK_BP_ResupplierLogic_HPP
#define UE4SS_SDK_BP_ResupplierLogic_HPP

class UBP_ResupplierLogic_C : public UPerkLogic
{
    FPointerToUberGraphFrame UberGraphFrame;

    FText GetAdditionalText(int32 Rank);
    void StartLogic(int32 Rank);
    void OnResupplied(float percentage);
    void Client_InstantlyReload();
    void ExecuteUbergraph_BP_ResupplierLogic(int32 EntryPoint);
};

#endif
