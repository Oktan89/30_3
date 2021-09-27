Задание 3. Запросы с аргументами


Что нужно сделать

Сделайте запрос к сервису httpbin.org, отправив при этом несколько дополнительных аргументов с данными.

Все названия аргументов и их значения — строковые, и принимаются от пользователя. Пользователь последовательно вводит их названия вместе со значениями, пока не встретится аргумент с названием «post» или «get», что будет означать, что ввод аргументов закончен и требуется отправить их на сервер выбранным способом.

Если пользователь выбрал «post», то выполняется POST-запрос и аргументы отправляются POST-способом (как форма). Если «get», то GET-запрос с GET-аргументами (прямо в URL).

По результатам выполнения запроса, выведите ответ сервера в стандартную консоль и обратите внимание на поля form или args, в зависимости от типа запроса в которых должны быть перечислены все введённые вами аргументы.


Советы и рекомендации

Согласно HTTP-стандарту, аргументы в GET-запросах перечисляются прямо в URL запроса после вопросительного знака. Названия аргументов отделяются от их значений с помощью символа «=»), а сами аргументы разделены символами «&».

Пример аргументов, заданных в URL запроса: ?foo=first&animal=cat&bar=third