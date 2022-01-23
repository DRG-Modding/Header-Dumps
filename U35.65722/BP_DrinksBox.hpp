#ifndef UE4SS_SDK_BP_DrinksBox_HPP
#define UE4SS_SDK_BP_DrinksBox_HPP

class ABP_DrinksBox_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* BartenderLocation;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;
    uint8 State;
    FBP_DrinksBox_COnAvailableForNewDrink OnAvailableForNewDrink;
    void OnAvailableForNewDrink(class ABP_DrinksBox_C* DrinkBox);
    FBP_DrinksBox_COnDrinkReady OnDrinkReady;
    void OnDrinkReady(class ABP_DrinksBox_C* DrinkBox);
    class ADrinkableActor* DrinkableActor;
    FBP_DrinksBox_COnStateChanged OnStateChanged;
    void OnStateChanged(uint8 State);

    void OnRep_DrinkableActor(bool CallFunc_IsValid_ReturnValue);
    void IsAvailable(bool& IsAvailable, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void OnRep_State(bool CallFunc_IsAvailable_IsAvailable);
    void OnLoaded_C20044584A6E4C14650B318543524FEE(UClass* Loaded);
    void Spawn Drink(class UDrinkableDataAsset* Drinkable);
    void OnDrinkableDestroyed(class AActor* DestroyedActor);
    void Fill DrinkableActor();
    void ExecuteUbergraph_BP_DrinksBox(int32 EntryPoint, FExecuteUbergraph_BP_DrinksBoxK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, UClass* K2Node_CustomEvent_Loaded, UClass* Temp_class_Variable, TSubclassOf<class ADrinkableActor> K2Node_ClassDynamicCast_AsDrinkable_Actor, bool K2Node_ClassDynamicCast_bSuccess, class UDrinkableDataAsset* K2Node_CustomEvent_Drinkable, FTransform CallFunc_MakeTransform_ReturnValue, FExecuteUbergraph_BP_DrinksBoxK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ADrinkableActor* CallFunc_FinishSpawningActor_ReturnValue, class AActor* K2Node_CustomEvent_DestroyedActor, class ABP_BarGlass_C* K2Node_DynamicCast_AsBP_Bar_Glass, bool K2Node_DynamicCast_bSuccess);
    void OnStateChanged__DelegateSignature(uint8 State);
    void OnDrinkReady__DelegateSignature(class ABP_DrinksBox_C* DrinkBox);
    void OnAvailableForNewDrink__DelegateSignature(class ABP_DrinksBox_C* DrinkBox);
};

#endif
