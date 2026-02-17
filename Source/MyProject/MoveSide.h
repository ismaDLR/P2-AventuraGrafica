#pragma once
#include "CoreMinimal.h"
#include <random>
#include "MoveSide.generated.h"

UCLASS(BlueprintType, Blueprintable, meta = (BlueprintSpawnableComponent))

class UMoveSide : public UActorComponent
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere,BlueprintReadWrite)
		float speed = 10.0;
	UMoveSide();
	void TickComponent(float DeltaTime
		, enum ELevelTick Tick
		, FActorComponentTickFunction* func) override;
	
	UFUNCTION(BlueprintCallable)
	float random();
		

};
