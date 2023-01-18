#ifndef UE4SS_SDK_BP_BarGlass_Random_HPP
#define UE4SS_SDK_BP_BarGlass_Random_HPP

class ABP_BarGlass_Random_C : public ABP_BarGlass_Standard_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    TArray<class UDrinkableDataAsset*> BeerEffects;
    class ABP_BarGlass_Standard_C* RandomDrink;
    class UDrinkableDataAsset* RandomDrinkData;

    void OnRep_RandomDrink();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_BarGlass_Random(int32 EntryPoint);
};

#endif
