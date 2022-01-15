#ifndef UE4SS_SDK_BP_DrinksBox_HPP
#define UE4SS_SDK_BP_DrinksBox_HPP

class ABP_DrinksBox_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USceneComponent* BartenderLocation;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* DefaultSceneRoot;
    uint8 State;
    FBP_DrinksBox_COnAvailableForNewDrink OnAvailableForNewDrink;
    void OnAvailableForNewDrink(ABP_DrinksBox_C* DrinkBox);
    FBP_DrinksBox_COnDrinkReady OnDrinkReady;
    void OnDrinkReady(ABP_DrinksBox_C* DrinkBox);
    ADrinkableActor* DrinkableActor;
    FBP_DrinksBox_COnStateChanged OnStateChanged;
    void OnStateChanged(uint8 State);

    void OnRep_DrinkableActor(bool CallFunc_IsValid_ReturnValue);
    void IsAvailable(bool& IsAvailable, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void OnRep_State(bool CallFunc_IsAvailable_IsAvailable);
    void OnLoaded_C20044584A6E4C14650B318543524FEE(TSubclassOf<UObject> Loaded);
    void Spawn Drink(UDrinkableDataAsset* Drinkable);
    void OnDrinkableDestroyed(AActor* DestroyedActor);
    void Fill DrinkableActor();
    void ExecuteUbergraph_BP_DrinksBox(int32 EntryPoint, ActorDestroyedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, TSubclassOf<UObject> K2Node_CustomEvent_Loaded, TSubclassOf<UObject> Temp_class_Variable, TSubclassOf<ADrinkableActor> K2Node_ClassDynamicCast_AsDrinkable_Actor, bool K2Node_ClassDynamicCast_bSuccess, UDrinkableDataAsset* K2Node_CustomEvent_Drinkable, FTransform CallFunc_MakeTransform_ReturnValue, OnAssetClassLoaded__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, ADrinkableActor* CallFunc_FinishSpawningActor_ReturnValue, AActor* K2Node_CustomEvent_DestroyedActor, UBP_BarGlass_C* K2Node_DynamicCast_AsBP_Bar_Glass, bool K2Node_DynamicCast_bSuccess);
    void OnStateChanged__DelegateSignature(uint8 State);
    void OnDrinkReady__DelegateSignature(ABP_DrinksBox_C* DrinkBox);
    void OnAvailableForNewDrink__DelegateSignature(ABP_DrinksBox_C* DrinkBox);
}

#endif
